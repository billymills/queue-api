//filename:	AQueue.h
//descrip:	declarations for AQueue
//author:	Billy Mills
//date:		fall 2012

#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
	private:
		int* newQueue; //pointer to new queue for resizing
		int* theQueue; //pointer to queue
		int front;
		int back;
		int capacity; //holds int for maximum capacity of queue
		int queueSize; //holds number of elements in array
		int minArraySize; //used to keep array from resizing below initial size

	public:
		AQueue(int initialSize = 10);
		~AQueue();
		int dequeue();  //dequeue will return an int
		void enqueue(int value); //no return value for enqueue
		int size();	//return int number of items currently in queue
		bool isEmpty();  //returns true if queue is empty
};

#endif
