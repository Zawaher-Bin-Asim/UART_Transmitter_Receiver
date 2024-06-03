SOURCES_SV :=\
			src/uart.sv \
			src/baud_rate.sv \
			src/rx_controller.sv \
			src/rx_datapath.sv \
			src/tx_controller.sv \
			src/tx_datapath.sv \
			test/uart_tb.sv 
			 
SOURCES_CPP := \
			test/uart_tb.cpp 

COMP_OPT_SV := \
			--incr \
			--relax \



DEFINE_VIVADO := -d Vivado
DEFINE_VERILATOR := -DVerilator


TB_TOP := uart_tb
MODULE := uart_tb

.PHONY : simulate elaborate compile 

simulate : $(TB_TOP)_snapshot.wdb


elaborate : .elab.timestamp


compile : .comp_sv.timestamp

 ### ===== WAVEFORMS DRAWINGS =====###

.PHONY : waves
viv_waves : $(TB_TOP)_snapshot.wdb
	@echo "### OPENING WAVES ###"
	xsim --gui $(TB_TOP)_snapshot.wdb

 ### ==== Simulation ==========###

$(TB_TOP)_snapshot.wdb : .elab.timestamp
	@echo
	@echo "### RUNNING SIMULATIONS ###"
	xsim $(TB_TOP)_snapshot --tclbatch xsim_cfg.tcl


### ======= ELABORATION ======= ######
.elab.timestamp : .comp_sv.timestamp
	@echo
	@echo "### RUNNING ELABORATION ####"
	xelab -debug all -top $(TB_TOP) -snapshot $(TB_TOP)_snapshot
	touch .elab.timestamp

#### ======= COMPILATION ======= ####
ifeq ($(SOURCES_SV),)
.comp_sv.timestamp :
	@echo
	@echo "### NO SYSTEM VERILOG SOURCES GIVEN ###"
	@echo "### SKIPPED SYSTEM VERILOG COMPILATION ###"
	touch .comp_sv.timestamp
else
.comp_sv.timestamp : $(SOURCES_SV)
	@echo 
	@echo "### COMPILING SYSTEM VERILOG ###"
	rm -rf xsim_cfg.tcl
	xvlog --sv $(SOURCES_SV) $(COMP_OPT_SV) $(DEFINE_VIVADO)
	@echo "log_wave -recursive *" > xsim_cfg.tcl
	@echo "run 200us" >> xsim_cfg.tcl
	@echo "exit" >> xsim_cfg.tcl
	touch .comp_sv.timestamp
endif	


#=====================================================#
#++												   ++#
#++			VERILATOR  MAKEFILE					   ++#					
#++												   ++#	
#=====================================================#

VERILATOR_FLAGS := \
    --top-module $(MODULE) \
    -Wno-DECLFILENAME \
    -Wno-WIDTH \
    -Wno-REDEFMACRO \
    -Wno-INITIALDLY \
	-Wno-lint \
	-Wno-ASSIGNIN




.PHONY : ver_sim verilate build

ver_sim  : ver_waves

verilate : .stamp.verilate

build    : ./obj_dir/V$(MODULE)


.PHONY : ver_waves

ver_waves : verilator
	@echo 
	@echo "### VERILATOR WAVES ###"
	gtkwave waveform.vcd 

verilator : ./obj_dir/V$(MODULE)
	@echo 
	@echo "### SIMULATING ###"
	@./obj_dir/V$(MODULE)

./obj_dir/V$(MODULE) : .stamp.verilate
	@echo 
	@echo "### BULIDING SIMULATIONS ###"
	make -C obj_dir -f V$(MODULE).mk V$(MODULE)


.stamp.verilate : $(SOURCES_SV) $(SOURCES_CPP)
	@echo 
	@echo "### VERILATING ###"
	verilator --trace $(VERILATOR_FLAGS)   -cc $(SOURCES_SV) $(DEFINE_VERILATOR) --exe $(SOURCES_CPP) --timing
	@touch .stamp.verilate

.PHONY : lint 

lint : $(SOURCES_SV)
	verilator --lint-only $(SOURCES_SV)


.PHONY : clean
clean : 
	rm -rf *.jou *.log *.pb *.wdb xsim.dir *.str
	rm -rf .*.timestamp
	rm -rf .stamp.*
	rm -rf ./obj_dir
	rm -rf waveform.vcd