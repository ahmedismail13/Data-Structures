//#include "QUEUE.h"
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	QUEUE iQueue(5);
//	cout << "Enqueuing 5 items...\n";
//	for (int x = 0; x < 5; x++)
//		iQueue.Enqueue(x);
//	
//	cout << "Now attempting to enqueue again...\n";
//	iQueue.Enqueue(5);
//
//	int output = iQueue.dequeue();
//	cout<<output<<endl;
//	cout << "The values in the queue were:\n";
//	while (!iQueue.isEmpty())
//	{
//		int value;
//		iQueue.dequeue(value);
//		cout << value << endl;
//	}
//}