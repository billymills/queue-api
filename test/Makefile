#filename:	test/Makefile
#descrip:	makefile for test subdir
#author:	billy mills
#date:		fall 2012

BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
AQUEUE = ../src/AQueue
LQUEUE = ../src/LQueue
SQUEUE = ../src/SQueue
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

queue_test: Queue.cpp $(AQUEUE)/AQueue.o $(LQUEUE)/LQueue.o $(LQUEUE)/Node.o $(SQUEUE)/SQueue.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test Queue.cpp $(AQUEUE)/AQueue.o $(LQUEUE)/LQueue.o $(LQUEUE)/Node.o $(SQUEUE)/SQueue.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
