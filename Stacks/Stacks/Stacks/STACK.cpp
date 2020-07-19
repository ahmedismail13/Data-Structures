#include "STACK.h"
#include <iostream>
using namespace std;

STACK::STACK(int s)
{
	size = s;
	top = -1;
}

bool STACK::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

bool STACK::isFull()
{
	if (top == size-1)
		return true;
	else
		return false;
}

void STACK::push(char c)
{
	if (!isFull())
	{
		top++;
		arr[top] = c;
	
	}
	else
		cout << "The Stack is Full \n";
}

void STACK::pop(char &c)
{
	if (!isEmpty())
	{
		c = arr[top];
		top--;
	}
	else
	{
		cout << "The Stack is Empty \n";
	}
}

char STACK::pop()
{
int c;
	if (!isEmpty())
	{
		c = arr[top];
		top--;
		return c;
	}
	else
	{
		cout << "The Stack is Empty \n";
		return -1;		// Means the stack is empty , this can be assigned as any number to identify the stack is empty
	}
}

STACK::~STACK()
{
}
