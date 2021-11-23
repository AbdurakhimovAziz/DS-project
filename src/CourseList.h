#pragma once
#include "Node.h"
#include "Course.h"

class CourseList
{
private:
	Node *head;

public:
	CourseList();

	void insertNode(Course data);
	void deleteNode(string someKey);
	void printAll();
	void search(string name);
};
