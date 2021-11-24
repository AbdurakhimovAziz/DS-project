#include <iostream>
#include "Node.h"
#include "Course.h"
#include "CourseList.h"

using namespace std;

int main(int argc, char const *argv[])
{

	CourseList *courseList = new CourseList();
	Course newCourse("em", "a", 5, "15", "a5");
	Course newCourse1("la", "a", 1, "15", "a5");
	Course newCourse2("cl", "a", 4, "15", "a5");
	Course newCourse3("bk", "a", 3, "15", "a5");
	Course newCourse4("cl", "sdf", 1, "16", "a1");
	Course newCourse5("ds", "sdf", 5, "16", "b55");
	courseList->insert(newCourse);
	courseList->insert(newCourse1);
	courseList->insert(newCourse2);
	courseList->insert(newCourse3);
	courseList->insert(newCourse4);
	courseList->insert(newCourse5);

	courseList->printAll();

	int position;
	cout << "Enter the position of the course you want to delete: ";
	cin >> position;

	if (courseList->deleteAt(position))
	{
		cout << "deleted succesfully" << endl;
		courseList->printAll();
	}

	// cout << "\n\nFiltered by name" << endl;
	// courseList->search("Cl");

	// system("pause");
	return 0;
}
