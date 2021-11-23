#pragma once
#include "Node.h"
#include "Course.h"

class CourseList
{
private:
	Node *head;
	int length;

public:
	CourseList();

	void insertNode(Course data);
	void deleteNode(string someKey);
	void printAll();
	void search(string name);
};
