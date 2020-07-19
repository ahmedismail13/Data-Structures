#include "QUEUE.h"
#include <iostream>
using namespace std;

//void main()
//{
//	int input = -1;
//	int counter = 1;
//	QUEUE que(100);
//
//	while (input != 4)
//	{
//		cout << "Welcome to the BUE Bank, Please select one of the below options" << endl;
//		cout << "Press 1 to add client" << endl;
//		cout << "Press 2 to serve client" << endl;
//		cout << "Press 3 to view waiting number of clients" << endl;
//		cout << "Press 4 to Exit" << endl;
//
//		cin >> input;
//
//		if (input == 1)
//		{
//			cout << "Your ticket number is " << counter << endl;
//			que.Enqueue(counter++);
//		}
//		else if (input == 2)
//		{
//			cout << "Now serving  " << que.dequeue() << endl;
//		}
//		else if (input == 3)
//		{
//			cout << "Total number of waiting Clients " << que.getNoItems() << endl;
//		}
//	}
//}

int main()
{
	int clientNum, clientCount = 0, clientServed = 0;
	QUEUE q(100);
	cout << endl;
	for (;;)
	{
		cout << "1-Add new client." << endl;
		cout << "2-Serve current client." << endl;
		cout << "3-View waiting clients." << endl;
		cout << "4-Exit." << endl << endl;
		cin >> clientNum;
		cout << endl;
			switch (clientNum)
			{
			case 1:
				cout << "Adding new client..." << endl << endl;
				++clientCount;
				q.Enqueue(clientCount);
				break;
			case 2:
				cout << "Current client being served is: " << q.dequeue() << endl << endl;
				clientServed++;
				break;
			case 3:
				cout << "The number of waiting clients are: " << clientCount << endl << endl;
				break;
			case 4:
				cout << "The number of clients served: " << clientServed << endl;
				cout << "The number of clients waiting: " << clientCount << endl;
				cout << "Exiting..." << endl << endl;
				break;
			default:
				cout << "Invalid choice, please enter a valid choice again." << endl;
				break;
			}
			if (clientNum == 4)
				break;
	}
}