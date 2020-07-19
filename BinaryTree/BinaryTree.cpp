#include "BinaryTree.h"
#include <iostream>
using namespace std;

void IntBinaryTree::insertNode(int num)
{
	TreeNode *newNode, // Pointer to a new node
		*nodePtr; // Pointer to traverse the tree
	// Create a new node
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = NULL;
	if (!root) // Is the tree empty?
		root = newNode;
	else
	{
		nodePtr = root;
		while (nodePtr != NULL)
		{
			if (num < nodePtr->value) // go left
			{
				if (nodePtr->left)// advance to left
					nodePtr = nodePtr->left;
				else // insert here
				{
					nodePtr->left = newNode;
					break;
				}
			}
			else if (num > nodePtr->value) // go right
			{
				if (nodePtr->right)// advance to right
					nodePtr = nodePtr->right;
				else // insert here
				{
					nodePtr->right = newNode;
					break;
				}
			}
			else // num not smaller nor bigger – must be equal
			{
				cout << "Duplicate value found in tree.\n";
				break;
			}
		}
	}
}

void IntBinaryTree::displayInOrder(TreeNode *nodePtr)
{ // Inorder (LEFT – NODE – RIGHT):
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

void IntBinaryTree::displayPreOrder(TreeNode *nodePtr)
{//Preorder (NODE – LEFT – RIGHT):
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

void IntBinaryTree::displayPostOrder(TreeNode *nodePtr)
{// Postorder (LEFT – RIGHT – NODE):
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}

bool IntBinaryTree::searchNode(int num)
{
	TreeNode *nodePtr = root;
	while (nodePtr) // while (nodePtr != null)
	{
		if (nodePtr->value == num)
			return true;
		else if (num < nodePtr->value)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}

void IntBinaryTree::remove(int num)
{
	deleteNode(num, root);
}

void IntBinaryTree::deleteNode(int num, TreeNode *&nodePtr)
{
	if (num < nodePtr->value)
		deleteNode(num, nodePtr->left);
	else if (num > nodePtr->value)
		deleteNode(num, nodePtr->right);
	else
		makeDeletion(nodePtr);
}


void IntBinaryTree::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode *tempNodePtr; // Temporary pointer, used in
	// reattaching the left subtree.
	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; // Reattach the left child
		delete tempNodePtr;
	}
	else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right; // Reattach the right child
		delete tempNodePtr;
	}
	// If the node has two children.
	else
	{
		// Move one node the right.
		tempNodePtr = nodePtr->right;
		// Go to the end left node.
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach the left subtree.
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach the right subtree.
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

