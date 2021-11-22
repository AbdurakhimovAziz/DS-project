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
	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		Node *curr = head;
		Node *prev = nullptr;
		while (curr != nullptr)
		{
			prev = curr;
			curr = curr->next;
		}
		prev->next = newNode;
	}
}

void CourseList::printAll()
{

	Node *curr = head;
	// Node *prev = nullptr;
	while (curr != nullptr)
	{
		cout << curr->getData().getName() << endl;
		curr = curr->next;
	}
}