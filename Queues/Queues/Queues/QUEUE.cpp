#include "QUEUE.h"
#include <iostream>
using namespace std;


QUEUE::QUEUE(int s)
{
	queueSize = s;
	rear = front = -1;
	numOfItems = 0;

}

bool QUEUE::isEmpty()
{
	if (numOfItems == 0)
		return true;
	else;
	return false;
}

bool QUEUE::isFull()
{
	if (numOfItems == queueSize)
		return true;
	else
		return false;
}

void QUEUE::Enqueue(int e)
{
	if (isFull())
		cout << "The Queue is Full \n";
	else
	{
		rear++;
		rear = rear%queueSize;
		arr[rear] = e;
		numOfItems++;

	}
}

void QUEUE::clear( )
{
	front = -1;
	rear = -1;
	numOfItems = 0;
}
void QUEUE::dequeue(int &e)
{
	if (isEmpty())
		cout << "The Queue is Empty \n";
	else
	{
		front++;
		front = front%queueSize;
		e= arr[front];
		numOfItems--;

	}
}
int QUEUE::dequeue()
{
	if (isEmpty())
	{
		cout << "The Queue is Empty \n";
		return -1;
	}
	else
	{
		int e;
		front++;
		front = front%queueSize;
		e= arr[front];
		numOfItems--;
		return e;

	}
}

int QUEUE::getNoItems()
{
	return numOfItems;
}

QUEUE::~QUEUE()
{
}
