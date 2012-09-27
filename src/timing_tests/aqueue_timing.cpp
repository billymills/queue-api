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
	cout << "Running timing test for array-based queue implementation" << endl;
	AQueue* queue = new AQueue(10);
	for(long i=1;i<=100000;++i){
		for(long j=1;j<=100;++j){
			queue->enqueue(j);
		}
	}	
	cout << "The queue is currently " << queue->size() << " elements in size" << endl;
	for(long x=1;x<=100000;++x) {
		for(long y=1;y<=100;++y){
			queue->dequeue();
		}
	}
	cout << "The queue is now " << queue->size() << " elements in size" << endl;
	delete queue;
	//end code being tested here

	end = clock(); //get ending ticks
	elapsed = end-start; //calculate total elapsed ticks
	seconds = (double) elapsed/CLOCKS_PER_SEC; 	//convert to seconds
	cout << "Elapsed time for this procedure is : " << seconds << " seconds " << endl;
	return 0;
}
