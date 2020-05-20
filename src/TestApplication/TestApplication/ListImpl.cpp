#include "stdafx.h"
#include "ListImpl.h"
#include "ListNode.h"

void ListImpl::Insert(int val) {
	
	ListNode *newNode = new ListNode(val);
	
	if (head == nullptr) {
		head = newNode;
		return;
	}

	//Traverse till end of the node
	ListNode *tmp = head;
	while (tmp->next != nullptr) {
		tmp = tmp->next;
	}
	tmp->next = newNode;
	return;
}


void ListImpl::Display() {
	if (head == nullptr) {
		cout << "List is empty" << endl;
	}

	ListNode *tmp = head;
	while (tmp != nullptr) {
		cout << tmp->data << '\t';
		tmp = tmp->next;
	}

	cout << endl;
}

void ListImpl::Reverse() {
	ListNode *p = head;
	ListNode *q = p,*r=nullptr;
	while (q != nullptr) {
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}

	head = r;
}