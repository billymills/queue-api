//filename:	SQueue.h
//descrip:	declarations for STL Queue implementation
//author:	Billy Mills
//date:		fall 2012

#ifndef __SQUEUE_H__
#define __SQUEUE_H__

#include <list>

using std::list;

class SQueue {
	private:
		std::list<int>* theQueue; //pointer to the queue

	public:
		SQueue();  //constructor
		~SQueue();  //destructor
		int dequeue();  //will return an int
		void enqueue(int value);
		int size();  //return number of elements in queue
		bool isEmpty();  //returns true if queue is empty
};

#endif
