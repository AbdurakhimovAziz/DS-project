#include "Node.h"

Node::Node()
{
}

Node::Node(Course data)
{
	setData(data);
}

void Node::setData(Course data)
{
	this->data = data;
}

Course Node::getData()
{
	return data;
}

Node::~Node()
{
	this->next = nullptr;
}