#pragma once

#include "Course.h"

class Node
{
private:
	Course data;

public:
	Node *next{nullptr};

	Node();
	Node(Course data);

	void setData(Course data);
	Course getData();
	~Node();
};
