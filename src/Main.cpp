#include <iostream>
#include "Node.h"
#include "Course.h"
#include "CourseList.h"

using namespace std;

int main(int argc, char const *argv[])
{

	CourseList *courseList = new CourseList();
	Course newCourse("em", "a", 5, "15", "a5");
	Course newCourse1("la", "a", 5, "15", "a5");
	Course newCourse2("cl", "a", 5, "15", "a5");
	Course newCourse3("bk", "a", 5, "15", "a5");
	courseList->insertNode(newCourse);
	courseList->insertNode(newCourse1);
	courseList->insertNode(newCourse2);
	courseList->insertNode(newCourse3);

	courseList->printAll();

	// system("pause");
	return 0;
}
