//filename:	squeue_timing.cpp
//descrip:	implementation of timing test
//author:	Billy Mills
//date:		fall 2012

#include "../SQueue/SQueue.h"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main() {
	int start, end, elapsed;
	double seconds;
	start = clock(); //get starting ticks
	
	//start of code to be timed
	SQueue* queue = new SQueue();
	for(int i=1;i<=1000000;++i){
		queue->enqueue(i);
	}
	cout << queue->size() << endl;
	for (int j=1;j<=1000000;++j){
		queue->dequeue();
	}
	cout << queue->size() << endl;
	cout << queue->isEmpty() << endl;
	delete queue;
	//end of code to be timed

	end = clock(); //get ending ticks
	elapsed = end-start; //calculate total elapsed ticks
	seconds = (double) elapsed/CLOCKS_PER_SEC; //convert to seconds
	cout << "elapsed time: " << seconds << " seconds " << endl;
	return 0;
}
