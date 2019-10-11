  //Program to create double linked list///////
#include<iostream>
using namespace std;
//Node class
class Node {
	int value;
	Node *ptr, *prev;
public:
	//setting value
	void setValue(int v)
	{
		value = v;
	}

	//setting next pointer
	void setNextNode(Node *n)
	{
		ptr = n;

	}
	//Setting Previous Pointer
	void setPrevPoin(Node *n)
	{
		prev = n;
	}
	//getting value
	int getValue()
	{
		return value;
	}

	//geting next Pointer
	Node *getNextNode()
	{
		return ptr;
	}
	//getting previuos pointer
	Node *getPrevNode()
	{
		return prev;
	}
};