//filename:	LQueue.h
//descrip:	declarations for LQueue
//author:	Billy Mills
//date:		fall 2012

#ifndef __LQUEUE_H__
#define __LQUEUE_H__

#include "Node.h"

class LQueue {
	private:
		Node* front;
		Node* back;
		int capacity; //holds int for maximum capacity of queue
		int queueSize; //number of elements in queue

	public:
		LQueue();
		~LQueue();
		int dequeue();  //dequeue will return an int
		void enqueue(int value); //no return value for enqueue
		int size();	//return int number of items currently in queue
		bool isEmpty();  //returns true if queue is empty
};

#endif
