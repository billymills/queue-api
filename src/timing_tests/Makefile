BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra
AQUEUE = ../AQueue
LQUEUE = ../LQueue
SQUEUE = ../SQueue

all: $(BUILD)/array_timing $(BUILD)/linked_list_timing $(BUILD)/std_list_timing

$(BUILD)/array_timing: aqueue_timing.cpp AQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/array_timing aqueue_timing.cpp AQueue.o

AQueue.o: $(AQUEUE)/AQueue.h $(AQUEUE)/AQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(AQUEUE)/AQueue.cpp

$(BUILD)/linked_list_timing: lqueue_timing.cpp LQueue.o Node.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/linked_list_timing lqueue_timing.cpp LQueue.o Node.o

LQueue.o: $(LQUEUE)/LQueue.h $(LQUEUE)/LQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LQUEUE)/LQueue.cpp

Node.o:	$(LQUEUE)/Node.h $(LQUEUE)/Node.cpp
	$(CPP) $(CPPFLAGS) -c $(LQUEUE)/Node.cpp

$(BUILD)/std_list_timing: squeue_timing.cpp SQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/std_list_timing squeue_timing.cpp SQueue.o

SQueue.o: $(SQUEUE)/SQueue.h $(SQUEUE)/SQueue.cpp
	$(CPP) $(CPPFLAGS) -c $(SQUEUE)/SQueue.cpp


clean:
	rm -f *.o
	rm -f *~
	rm -f $(AQUEUE)/*.o
	rm -f $(AQUEUE)/*~
	rm -f $(LQUEUE)/*.o
	rm -f $(LQUEUE)/*~
	rm -f $(SQUEUE)/*.o
	rm -f $(SQUEUE)/*~
	rm -f $(BUILD)/array_timing
	rm -f $(BUILD)/linked_list_timing
	rm -f $(BUILD)/std_list_timing
