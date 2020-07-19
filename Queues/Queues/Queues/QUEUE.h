#pragma once
class QUEUE
{
private:
	int front;
	int rear;
	int arr[100];
	int queueSize;
	int numOfItems;
public:
	QUEUE(int s);
	bool isFull();
	bool isEmpty();
	void clear();
	void Enqueue(int e);
	void dequeue(int &e);
	int dequeue();
	int getNoItems();
	~QUEUE();
};

