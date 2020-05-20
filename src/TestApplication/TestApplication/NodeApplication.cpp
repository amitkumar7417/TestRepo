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

	list.Display();
	
	cout << "Reversing the list" << endl;
	list.Reverse();
	list.Display();

    return 0;
}

