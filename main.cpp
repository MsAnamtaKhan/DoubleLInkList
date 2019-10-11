 /////////PROGRAM TO CREATE DOUBLE LINKED LIST//////////////////////
#include<iostream>
#include "List.cpp"
using namespace std;
int main()
{
	DoubleList myList;
	//Inserting first node
	cout << "Inserting  " << myList.getSize() << " Node" << endl;
	myList.insert(10);
	cout << myList.get() << endl;
	cout << "Size of stacks is  " << myList.getSize() << endl;
	cout << endl;

	//inserting second node
	cout << "Inserting  " << myList.getSize() << " Node" << endl;
	myList.insert(5);
	cout << myList.get() << endl;
	cout << "Size of stacks is  " << myList.getSize() << endl;
	cout << endl;


	//inserting third node
	cout << "Inserting  " << myList.getSize() << " Node" << endl;
	myList.insert(21);
	cout << myList.get() << endl;
	cout << "Size of stacks is  " << myList.getSize() << endl;
	cout << endl;


	//Inserting fourth node at middle of link list
	cout << "Inserting  " << myList.getSize() << " Node" << endl;
	myList.start();
	myList.next();
	myList.insert(20);
	cout << myList.get() << endl;
	cout << "Size of stacks is   " << myList.getSize() << endl;
	cout << endl;

	//calling print function
	myList.print();

	int s = 0;
	int v = 0;
	int  l = 0;
	int h = 0;
	bool f = true;
	cout << "*********Select the Menu to tell at Which position node is inserted*********" << endl;
	cout << "  1: " << " Insert at Beginning " << endl;
	cout << "  2: " << " Insert at Last " << endl;
	cout << "  3: " << " Updating the value " << endl;
	cout << "  4: " << " Deleting the node " << endl;
	cout << "  5: " << " Search  " << endl;
	cout << "  6: " << " sum " << endl;
	cout << "  7: " << " insert after val " << endl;
	cout << "  8: " << " insert after ind " << endl;
	cout << "  9: " << " Display the Node " << endl;
	cout << "  10: " << " End the menu  " << endl;
	int a = 0;
	int c;

	while (f)
	{
		cout << "enter the option" << endl;
		cin >> a;
		switch (a)
		{
		case 1:

			//insert At beginning
			cout << "insert node at begining" << endl;
			cout << "Inserting  " << myList.getSize() << " Node" << endl;
			myList.insertAtBegin(12);
			myList.print();
			cout << "Size of stacks is  " << myList.getSize() << endl;
			cout << endl;
			break;

		case 2:
			//inserting node at end
			cout << "Inserting Node at last" << endl;
			cout << "Inserting  " << myList.getSize() << " Node" << endl;
			myList.insertNodeAfter(10);
			cout << myList.get() << endl;
			cout << "Size of stacks is  " << myList.getSize() << endl;
			cout << endl;
			myList.print();
			break;
		case 3:
			cout << "Updating thre node" << endl;
			cout << "Enter the index of which value is to be altered :" << endl;
			cin >> s;
			cout << "Enter value which is altered :" << endl;
			cin >> v;
			myList.updateValue(s, v);
			cout << "List of nodes After updating values" << endl;
			myList.print();
			break;
		case 4:
			cout << "To delet a node enter the index of node" << endl;
			cin >> c;
			myList.deletePtr(c);
			myList.print();
			break;
		case 5:
			cout << "Enter the value of node which is to e searched" << endl;
			cin >> c;
			Node *p;
			p = myList.search(c);
			cout << "The address of node is " << p << endl;
			break;
		case 6:
			cout << "The sum of nodes" << endl;

			h = myList.sum();
			cout << "Sum: " << h << endl;
			break;
		case 7:
			myList.insertNodeAfter(10);
			myList.print();
			break;
		case 8:
			myList.insertNodePos(1);
			myList.print();
			break;
		case 9:
			cout << "Displaying all nodes" << endl;
			myList.print();
			break;
		case 10:
			cout << "End the menu" << endl;
			f = false;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;

}