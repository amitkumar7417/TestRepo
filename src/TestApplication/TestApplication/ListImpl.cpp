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

int ListImpl::ListSize() {
	int count = 0;
	if (head == nullptr) {
		cout << "List is empty" << endl;
	}

	ListNode *tmp = head;
	while (tmp != nullptr) {
		++count;
		tmp = tmp->next;
	}
	
	return count;
}

int ListImpl::FindMiddleOfList() {

	if (head == nullptr) {
		cout << "Empty Linked List" << endl;
		return -1;
	}

	//Use slowptr(step one node at a time) and fastptr(step two node at a time)
	//When fastprt pointing to the last node or beyond, slowptr will be pointing to the middle of the node.
	ListNode *slowptr = nullptr, *fastptr = nullptr;
	slowptr = head;
	fastptr = head;
	while (slowptr && fastptr) {

		fastptr = fastptr->next;
		if (!fastptr)
			break;

		fastptr = fastptr->next;
		slowptr = slowptr->next;		
	}

	return slowptr->data;
}