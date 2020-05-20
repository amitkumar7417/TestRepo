#pragma once
#include "stdafx.h"
class ListNode {

public:
	int data;
	ListNode *next;

	ListNode(int val) :data{ val },next { nullptr } {
		//Constructor
	}

	~ListNode() {
		//Destructor
	}

	ListNode(const ListNode & l) {
		//Copy Constructor
	}

	ListNode& operator=(const ListNode &l) {
		//Assignment Oprerator
	}

	ListNode(ListNode && l) = delete;
	ListNode& operator=(ListNode &&l) = delete;
	

};