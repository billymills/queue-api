//filename:	Node.cpp
//descrip:	implementation file for Node
//author:	Billy Mills
//date:		fall 2012

#include "Node.h"
#include <iostream>
#include <assert.h>

//constructor
Node::Node(int x) {
	value = x;
	next = 0;
}

//destructor
Node::~Node() {

}

//returns value
int Node::getValue(){
	return value;
}

//returns pointer to next node
Node* Node::getNext() {
	return next;
}

//sets pointer in node
void Node::setNext(Node* &n) {
	next = n;
}
