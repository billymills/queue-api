//filename:	Makefile
//descrip:	makefile for test suite
//author:	Billy Mills
//date:		fall 2012

#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/LQueue/LQueue.h"
#include "../src/LQueue/Node.h"
#include "../src/SQueue/SQueue.h"

//tests for queue implementation using array
TEST(ArrayQueue, Dequeue) {
	AQueue* q = new AQueue();
	q->enqueue(10);
	EXPECT_EQ(10, q->dequeue());
	EXPECT_EQ(0, q->size());
	delete q;
}

TEST(ArrayQueue, Resize) {
	AQueue* q = new AQueue();
	for (int i=1;i<=11;++i){
		q->enqueue(i);
	}
	EXPECT_EQ(11, q->size());
	delete q;
}

//tests for queue implementation using linked list
TEST(LLQueue, Dequeue) {
	LQueue* q = new LQueue();
	q->enqueue(10);
	EXPECT_EQ(10, q->dequeue());
	EXPECT_EQ(0, q->size());
	delete q;
}

//tests for queue implementation using linked list
TEST(SQueue, Dequeue) {
	SQueue* q = new SQueue();
	q->enqueue(10);
	EXPECT_EQ(10, q->dequeue());
	EXPECT_EQ(0, q->size());
	delete q;
}
