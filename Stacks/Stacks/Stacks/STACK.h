#pragma once
class STACK
{
private:
	int top;
	char arr[100];
	int size;
public:
	STACK(int s);
	bool isFull();
	bool isEmpty();
	void pop(char &e);
	char pop();
	void push(char e);
	~STACK();
};

