//filename: Node.h
//descrip:	header file for node
//author:	Billy Mills
//date:		fall 2012

#ifndef __NODE_H__
#define __NODE_H__

class Node {
	private:
		int value;
		Node* next;

	public:
		Node(int); //constructor
		~Node(); //destructor
		int getValue();
		Node* getNext();
		void setNext(Node* &n);
};

#endif
