BUILD = ./build
TEST = ./test
AQUEUE = ./src/AQueue
LQUEUE = ./src/LQueue
SQUEUE = ./src/SQueue
TIMING = ./src/timing_tests

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/array_timing $(BUILD)/linked_list_timing $(BUILD)/std_list_timing $(TEST)/queue_test

$(BUILD)/array_timing: $(AQUEUE)/AQueue.cpp $(AQUEUE)/AQueue.o
	cd $(TIMING); $(MAKE)

$(BUILD)/linked_list_timing: $(LQUEUE)/LQueue.cpp $(LQUEUE)/LQueue.o $(LQUEUE)/Node.cpp $(LQUEUE)/Node.o
	cd $(TIMING); $(MAKE)

$(BUILD)/std_list_timing: $(SQUEUE)/SQueue.cpp $(SQUEUE)/SQueue.o
	cd $(TIMING); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(AQUEUE)/AQueue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(TIMING); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
