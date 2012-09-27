//filename:	AQueue.cpp
//descrip:	implementation for array queue
//author:	Billy Mills
//date:		fall 2012

#include "AQueue.h"
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

//constructor
AQueue::AQueue(int initialSize) {
	theQueue = new int[initialSize];
	front = 0;
	back = -1;
	capacity = initialSize;
	minArraySize = initialSize;
	queueSize = 0;
}

//destructor
AQueue::~AQueue() {
	delete[] theQueue;
}

//dequeue method
int AQueue::dequeue() {
	assert(queueSize > 0); //if size is zero nothing to dequeue
	if (queueSize<=capacity/4 && capacity>minArraySize){  //need to reduce size of array
		int* newQueue = new int[capacity/2]; //new capacity is half old
		for (int i=0;i<queueSize;++i){
			newQueue[i]=theQueue[(front+i)%capacity];
		}
		delete theQueue;
		theQueue=newQueue; //reassign pointer
		capacity /= 2; //update capacity
		front = 0; 
		back = queueSize-1; 
	}
	int result = theQueue[front];  //store value
	front = (front+1)%capacity; //update front 
	queueSize--; //update size
	return result;
}

//enqueue method
void AQueue::enqueue(int value) {
	if (queueSize==capacity) {	//if the queue is full resize
		int* newQueue = new int[capacity*2];  //create new array twice the size
		for (int i=0;i<capacity;i++) {
			newQueue[i]=theQueue[(front+i)%capacity];
		}
		delete[] theQueue;
		theQueue=newQueue;	//reassign pointer
		capacity *= 2;	//update capacity
	}
	assert(queueSize != capacity);  //just resized should not be at capacity
	back=(back+1)%capacity;
	theQueue[back] = value; 
	queueSize++; //update size
}

//size method returns num elements in queue
int AQueue::size() {
	return queueSize;
}

//isEmpty method returns true if queue is empty
bool AQueue::isEmpty() {
	return (queueSize==0);
}


