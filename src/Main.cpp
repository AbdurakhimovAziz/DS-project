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
	Course newCourse5("ja", "sdf", 5, "16", "b55");
	courseList->insertNode(newCourse);
	courseList->insertNode(newCourse1);
	courseList->insertNode(newCourse2);
	courseList->insertNode(newCourse3);
	courseList->insertNode(newCourse4);
	courseList->insertNode(newCourse5);

	courseList->printAll();

	// system("pause");
	return 0;
}
