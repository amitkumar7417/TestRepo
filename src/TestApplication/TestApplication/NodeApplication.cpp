// TestApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListImpl.h"


int main()
{
	ListImpl list;
	list.Insert(10);
	list.Insert(20);
	list.Insert(30);
	list.Insert(40);
	list.Insert(50);
	list.Insert(60);
	list.Insert(70);
	list.Insert(80);
	
	list.Display();
	
	cout << "Reversing the list" << endl;
	list.Reverse();
	list.Display();

	cout << "Restoring the original list" << endl;
	list.Reverse();
	list.Display();

	cout << "Size of the list : " << list.ListSize() << endl;

	cout << "Find middle node" << endl;
	cout << "Middle of list : " << list.FindMiddleOfList() << endl;



	cout << "Delete first node in the list" << endl;
	list.DeleteNode(10);
	list.Display();

	cout << "Find middle node" << endl;
	cout << "Middle of list : " << list.FindMiddleOfList() << endl;

	cout << "Delete middle node in the list : 40" << endl;
	list.DeleteNode(40);
	list.Display();

	cout << "Delete end node in the list" << endl;
	list.DeleteNode(80);
	list.Display();


	cout << "Delete node not present in the list" << endl;
	list.DeleteNode(-1);
	list.Display();

	

    return 0;
}

