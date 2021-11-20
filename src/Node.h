#pragma once

#include "Course.h"

class Node
{
public:
	Course data;
	Node *next;

	Node();
	Node(Course course, Node *nextValue = NULL);

	void insertNode(Node *head, Course data);
	void deleteNode(Node *head, string someKey);
	void printAll(Node *head);
	void printFilteredList(Node *head, string someFilter);
	Node searchNode(Node *head, string someKey);
};
