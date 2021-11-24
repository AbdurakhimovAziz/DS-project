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

	void insert(Course data);
	bool deleteAt(int position);
	void printAll();
	void search(string name);
};
