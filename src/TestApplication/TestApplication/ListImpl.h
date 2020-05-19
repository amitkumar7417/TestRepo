#pragma once
#include "ListNode.h"

class ListImpl {
private:
	ListNode * head;

public:
	ListImpl() :head{ nullptr } {

	}
	inline void SetHead(ListNode *headptr) {
		head = headptr;
	}
	void Insert(int val);
	void Display();
	void Reverse();
	int ListSize();
	int FindMiddleOfList();
};