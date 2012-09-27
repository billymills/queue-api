//filename:	SQueue.cpp
//descrip:	defs for queue implementation
//author:	Billy Mills
//date:		fall 2012

#include "SQueue.h"
#include <iostream>
#include <assert.h>
#include <list>

//constructor
SQueue::SQueue() {
	theQueue = new std::list<int>();
}

//destructor
SQueue::~SQueue() {
	delete theQueue;
}

//enqueue method
void SQueue::enqueue(int value) {
	theQueue->push_back(value);
}

//dequeue method
int SQueue::dequeue() {
	assert(!isEmpty());
	int result = theQueue->front();
	theQueue->pop_front();
	return result;
}

//returns number of items in queue
int SQueue::size() {
	return theQueue->size();
}

//returns true if queue is empty
bool SQueue::isEmpty() {	
	return theQueue->empty();
}
