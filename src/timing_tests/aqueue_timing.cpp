//filename:	aqueue_timing.cpp
//descrip:	timing test file
//author:	Billy Mills
//date:		fall 2012

#include "../AQueue/AQueue.h"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main() {
	int start, end, elapsed;
	double seconds;
	start = clock(); //get starting ticks
	
	//start code to test here
	AQueue* queue = new AQueue(10);
	for(int i=1;i<=1000000;++i){
		queue->enqueue(i);
	}	
	cout << queue->size() << endl;
	for(int j=1;j<=1000000;++j) {
		queue->dequeue();
	}
	cout << queue->size() << endl;
	cout << queue->isEmpty() << endl;
	cout << "hello" << endl;
	delete queue;
	//end code being tested here

	end = clock(); //get ending ticks
	elapsed = end-start; //calculate total elapsed ticks
	seconds = (double) elapsed/CLOCKS_PER_SEC; 	//convert to seconds
	std::cout << "raw array elapsed time: " << seconds << " seconds " << std::endl;
	return 0;
}
