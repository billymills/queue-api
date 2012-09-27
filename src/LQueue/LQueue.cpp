//filename:	LQueue.cpp
//descrip:	implementation file for linked list queue
//author:	Billy Mills
//date:		fall 2012

#include "LQueue.h"
#include "Node.h"
#include <iostream>
#include <assert.h>

using std::cout;
using std::endl;

//constructor
LQueue::LQueue() {
	front = 0;  //front is a pointer
	back = 0;	//back is a pointer
	queueSize = 0;	//number of items in queue
}

//destructor
LQueue::~LQueue() {
	for(int i=0;i<queueSize;++i){
		dequeue();
	}
}

//dequeue method
int LQueue::dequeue() {
	assert(queueSize != 0); //make sure something is in queue
	Node* temp = front;
	int result = temp->getValue();  //dequeue from the front and store result
	front = temp->getNext();  //update front
	delete temp;
	queueSize--;
	return result;
}
	
//enqueue method
void LQueue::enqueue(int value) {
	Node* newNode = new Node(value);  //create a new node
	if (isEmpty()) {	//if this is the first element front should point to it
		front = newNode;
	}
	else {
		back->setNext(newNode);
	}
	back = newNode;
	queueSize++;
}

//method to return number of items in queue
int LQueue::size() {
	return queueSize;
}

//method that returns true if queue is empty
bool LQueue::isEmpty() {
	return (queueSize==0);  //will evaluate to true if no items in queue
}

