#include "CourseList.h"
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;

CourseList::CourseList()
{
	head = NULL; // initialize empty list
}

void CourseList::insert(Course data)
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

		if (curr == nullptr) // insert at the end of list
		{
			prev->next = newNode;
			length++;
			return;
		}

		if (curr->getData().getDayNum() == newNode->getData().getDayNum())
		{ // if days are equal iterate until we encounter course with the later time
			while (curr->getData().getTime().compare(newNode->getData().getTime()) < 0 &&
						 curr->getData().getDayNum() == newNode->getData().getDayNum() && curr->next != nullptr)
			{
				prev = curr;
				curr = curr->next;
			}
		}

		if (prev == nullptr) // if there is only 1 element in the list or new node's day is less than head node's day
		{
			// insert before head node
			newNode->next = head;
			head = newNode;
		}
		else
		{
			if (newNode->getData().getDayNum() == curr->getData().getDayNum() &&
					newNode->getData().getTime().compare(curr->getData().getTime()) > 0)
			// if they are in the same day compare course times, if new node's course time is more than current node's course time we enter inside if statement
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
	length++;
}

void CourseList::printAll()
{

	Node *curr = head;
	int i = 1; // index of an element

	cout << "No"
			 << "\tCourse"
			 << "\tDay"
			 << "\tTime"
			 << "\tRoom"
			 << "\tProfessor" << endl
			 << endl;

	while (curr != nullptr)
	{
		cout << i++ << "\t";
		curr->getData().print(); // call print method of every node's data
		curr = curr->next;
	}
}

void CourseList::search(string name)
{
	bool found = false;
	Node *curr = head;
	int i = 1;
	std::transform(name.begin(), name.end(), name.begin(), ::toupper); // convert the string to uppercase

	while (curr != nullptr) // traverse every node
	{
		string currCourseName = curr->getData().getName();																							 // get current course's name
		std::transform(currCourseName.begin(), currCourseName.end(), currCourseName.begin(), ::toupper); // convert course name to uppercase

		if (currCourseName == name)
		{
			if (!found)
			{
				cout << "No"
						 << "\tCourse"
						 << "\tDay"
						 << "\tTime"
						 << "\tRoom"
						 << "\tProfessor" << endl
						 << endl;
				found = true;
			}
			cout << i++ << "\t";
			curr->getData().print(); // call print method of every node's data only if the condition is met
		}
		curr = curr->next;
	}
	if (!found)
		cout << "No such course" << endl;
}

bool CourseList::deleteAt(int position)
{
	if (position > length || position < 1)
		return false;

	Node *curr = head;
	int i = 1; // index of an element

	while (i < position - 1)
	{
		curr = curr->next;
		i++;
	}
	Node *temp = nullptr; // to store node which is going to be deleted

	if (position == 1) // delete from head
	{
		temp = curr;
		head = curr->next;
	}
	else
	{
		temp = curr->next;
		curr->next = curr->next->next;
	}

	temp->~Node(); // delete node
	length--;
	return true;
}

bool CourseList::editAt(int position, Course course)
{
	if (deleteAt(position))
	{
		insert(course);
		return true;
	}
	return false;
}