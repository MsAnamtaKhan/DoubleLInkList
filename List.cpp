          //////*Program to create a List*/////////
#include<iostream>
using namespace std;
#include "Node.cpp"

// Creating list
class DoubleList
{
	Node *headNode;
	Node *currentNode;
	int size;
public:
	//Constructor
	DoubleList()
	{
		headNode = 0;
		currentNode = 0;
		size = 0;
	}
	//insert/push Function
	void insert(int n)
	{
		if (currentNode == 0)
		{ //insert if stack is empty
			Node *newNode = new Node();
			newNode->setValue(n);
			newNode->setNextNode(0);
			newNode->setPrevPoin(0);
			headNode = newNode;
			currentNode = newNode;
			size++;
		}
		else
		{
			if (currentNode->getNextNode() == 0)
			{   //inserting node at the last of linked list
				//insert if stack is not empty and current index at the last of the stack
				Node *newNode = new Node();
				newNode->setValue(n);
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				newNode->setPrevPoin(currentNode);
				currentNode = newNode;
				
				size++;
			}
			else
			{   //inserting node at the middle of linked list
				//insert if stack is not empty  and currentnode is not at last and to insert stack at middle
				Node *newNode = new Node();
				newNode->setValue(n);
				newNode->setNextNode(currentNode->getNextNode());
				newNode->setPrevPoin(currentNode);
				(currentNode->getNextNode())->setPrevPoin(newNode);
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				size++;
			}
		}
	}
	//Fuction to get the value of node
	int get()
	{

		return currentNode->getValue();
	}

	//function to get the size of linked list
	int getSize()
	{
		return size;
	}

	//moving current node at start
	void start()
	{
		currentNode = headNode;
	}

	//moving current node to neext node
	void next()
	{
		if ((currentNode->getNextNode()) != NULL)
		currentNode = currentNode->getNextNode();
	}
	//Functio  to move back
	void back()
	{   if((currentNode->getPrevNode())!=NULL)
		currentNode = currentNode->getPrevNode();
	;
	}

	//function to display list
	void print()
	{
		start();
		cout << "List of nodes" << endl;
		for (int i = 0; i < getSize(); i++)
		{
			cout << "No " << i + 1 << " :";
			cout << get();
			next();
			cout << endl;
		}
	}
	//FUNCTION TO DELETE A NODE
	void deletePtr(int v)
	{
		Node *ptr1=new Node();
		
		if (currentNode == 0)
		{
			cout << "Node is empty" << endl;
		}
		else
		{
			if (v > getSize() && v<getSize())
			{
				cout << "This node is not present in the list" << endl;
			}
			else
			{
				start();
				for (int i = 1; i <v-1; ++i)
				{
					next();

				}
				if (currentNode==headNode && v==1)
				{
					cout << "For deleting head" << endl;
					ptr1 = headNode;
					currentNode=headNode = headNode->getNextNode();
					ptr1->setNextNode(0);
					--size;
				}
				else
				{ 
					cout << "For DELTE AT END" << endl;
						ptr1 = currentNode->getNextNode();
						currentNode->setNextNode(ptr1->getNextNode());
						currentNode->setPrevPoin(ptr1->getPrevNode());
						ptr1->setNextNode(0);
						ptr1->setPrevPoin(0);
						--size;
				 }
				
			}
		}
	}
	//FUNCTION TO FIND THE SUM OF ALL NODES
	int sum()
	{
		int s = 0;
		start();
		for (int i = 0; i < getSize(); i++)
		{
			s = s + get();
			next();
		}
		return s;
	}

	//FUNCTION TO SEARCH NODES
	Node* search(int v)
	{
		bool f = 0;
		if (currentNode == 0 )
		{
			cout << "List is empty" << endl;
			return NULL;
		}
		else
		{
			start();
			for (int i = 0; i < getSize(); i++)
			{
				if (v == get())
				{
					
					f = 1;
					return currentNode->getNextNode();
				}
				next();
				
			}
			if (!f)
				cout << "This value is ot present in any node" << endl;
		}
	}

	//FUNCTION TO UPDATE VALUE OF NODE
	void updateValue(int s, int v)
	{
		start();
		for (int i = 0; i < s - 1; i++)
		{
			next();
		}
		currentNode->setValue(v);
	}

	//FUNCTION TO INSERT NODE AT LAST
	void insertAtLast(int n)
	{
		start();
		for (int i = 0; i < getSize() - 1; i++)
		{
			next();
		}cout << "y";
		Node *newNode = new Node();
		newNode->setValue(n);
		newNode->setNextNode(currentNode->getNextNode());
		currentNode->setNextNode(newNode);
		newNode->setPrevPoin(currentNode);
		currentNode = newNode;
		size++;
	}

//FUNCTION TO INSERT NODE AT BEGINNING
	void insertAtBegin(int n)
	{
		Node *newNode = new Node();
		newNode->setValue(n);
		newNode->setNextNode(headNode);
		newNode->setPrevPoin(0);
		headNode = newNode;
		currentNode = newNode;
		size++;
	}

	//FUNCTION TO INSERT NODE AFTER GIVEN INDEX
	void insertNodePos(int n)
	{
		if (n > getSize() && n < getSize())
			cout << "This index is not in the list" << endl;
		start();
		for (int i = 1; i < n-1 ; i++)
		{
			next();
		}
		insert(2);
	}

	//FUNCTION TO INSERT NODE AFTER GIVEN VALUE
	void insertNodeAfter(int s)
	{
		bool f = 0;
		start();
		for (int i = 0; i < getSize(); i++)
		{
			if (s == get())
			{
				insert(3);
				f = 1;
			}
			next();
		}
		if (!f)
			cout << "This nde is not present in this list" << endl;
	}
};
