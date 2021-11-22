#include "CourseList.h"
#include <iostream>

using std::cout;
using std::endl;

CourseList::CourseList()
{
	head = NULL; // initialize empty list
}

void CourseList::insertNode(Course data)
{
	Node *newNode = new Node(data);
	if (head == NULL) // insert into empty list
	{
		head = newNode;
	}
	else // list is not empty
	{
		Node *curr = head;
		Node *prev = nullptr;

		while (curr != nullptr && curr->getData().getDayNum() < newNode->getData().getDayNum())
		{
			// compare course days, if new node's day is "more" than current node's we enter inside the while loop
			prev = curr;
			curr = curr->next;
		}

		if (prev == nullptr) // if there is only 1 element in the list or new node's day is less than head node's day
		{
			if (newNode->getData().getTime().compare(head->getData().getTime()) > 0)
			// compare course times, if new node's course time is more than head's course time we enter inside if statement
			{
				// insert after head node
				newNode->next = head->next;
				head->next = newNode;
			}
			else
			{
				// insert before head node
				newNode->next = head;
				head = newNode;
			}
		}
		else
		{
			if (newNode->getData().getTime().compare(curr->getData().getTime()) > 0)
			// compare course times, if new node's course time is more than current node's course time we enter inside if statement
			{ // insert after current node
				newNode->next = curr->next;
				curr->next = newNode;
			}
			else
			{ // insert before current node
				prev->next = newNode;
				newNode->next = curr;
			}
		}
	}
}

void CourseList::printAll()
{

	Node *curr = head;
	while (curr != nullptr)
	{
		curr->getData().print(); // call print method of every node's data
		curr = curr->next;
	}
}

void CourseList::deleteNode(string someKey)
{
	// TODO display all list with indexes and delete by index
}