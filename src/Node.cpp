#include <iostream>
#include "Node.h"

Node::Node()
{
	this->next = NULL;
}
Node::Node(Course course, Node *nextValue) : data(course), next(nextValue)
{
}

void Node::insertNode(Node *head, Course data)
{
}