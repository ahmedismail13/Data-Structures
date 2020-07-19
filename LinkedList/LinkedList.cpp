#include "LinkedList.h"
#include<iostream>
using namespace std;

void FloatList::appendNode(float num) {
	ListNode *newNode;
	ListNode *nodePtr;
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr; // If there are no nodes in the list// make newNode the first node
	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
}
FloatList::ListNode* FloatList::split(){
	int counter = 0;
	ListNode * newHead,*previous;
	previous = nullptr;
	newHead = head;
	if (head == nullptr)
		return nullptr;
	while (newHead != nullptr)
	{
		counter++;
		newHead = newHead->next;
	}
	counter /= 2;
	
	newHead = head;

	for (int i = 0; i < counter; i++)
	{
		previous = head;
		head = head->next;
	}
	if (previous == nullptr)		//condition created if there is one element
	{
		return nullptr;	
	}
	previous->next = nullptr;
	return newHead;

}
void FloatList::displayList(void)
{
	ListNode *nodePtr;
	nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

void FloatList::insertNode(float num)
{
	ListNode *newNode, *nodePtr, *previousNode;
	previousNode = nullptr;
	newNode = new ListNode;
	newNode->value = num;// If there are no nodes in the list, make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else	// Otherwise, insert newNode.
	{
		nodePtr = head;
		while (nodePtr->next != nullptr && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If the new mode is to be the 1st in the list,// insert it before all other nodes.
		if (previousNode == nullptr)
		{
			head = newNode;
			newNode-> next = nodePtr;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}

}
void FloatList::deleteNode(float num) {
	ListNode *nodePtr, *previousNode;	// If the list is empty, do nothing.
	previousNode = nullptr;

	if (!head)
		return; // Determine if the first node is the one.
	if (head->value == num) {
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else {	// Initialize nodePtr to head of list
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		previousNode->next = nodePtr->next;
		delete nodePtr;
	}
}




FloatList::FloatList()
{
	head = nullptr;
}
FloatList::FloatList(ListNode * a)
{
	head = a;
}


FloatList::~FloatList()
{
}
