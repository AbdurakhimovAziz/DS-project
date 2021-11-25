#include <iostream>
#include "Node.h"
#include "Course.h"
#include "CourseList.h"

using namespace std;

Course createCourse()
{
	string name, profName, time, room;
	int dayNum;

	cout << "Enter the name: ";
	cin >> name;
	cout << "Enter professor's name: ";
	cin >> profName;
	cout << "Choose day" << endl;
	cout << "1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n(1-5): ";
	cin >> dayNum;
	cout << "Enter time: ";
	cin >> time;
	cout << "Enter room: ";
	cin >> room;

	Course course(name, profName, dayNum, time, room);
	return course;
}

int main(int argc, char const *argv[])
{

	CourseList *courseList = new CourseList();
	Course newCourse("EM", "A.Tomskova", 5, "11:00", "B209");
	Course newCourse1("LA", "A.Tomskova", 1, "12:30", "B207");
	Course newCourse2("CL", "Ch.An", 4, "15:00", "A202");
	Course newCourse3("BK", "N.An", 3, "15:00", "A515");
	Course newCourse4("CL", "Ch.An", 1, "16:00", "B201");
	Course newCourse5("ds", "sdf", 5, "10", "b55");
	courseList->insert(newCourse);
	courseList->insert(newCourse1);
	courseList->insert(newCourse2);
	courseList->insert(newCourse3);
	courseList->insert(newCourse4);
	courseList->insert(newCourse5);

	courseList->printAll();

	// int position;
	// cout << "Enter the position of the course you want to delete: ";
	// cin >> position;

	// if (courseList->deleteAt(position))
	// {
	// 	cout << "deleted succesfully" << endl;
	// 	courseList->printAll();
	// }

	int position1;
	cout << "Enter the position of the course you want to edit: ";
	cin >> position1;

	Course course = createCourse();
	courseList->editAt(position1, course);
	courseList->printAll();

	// cout << "\n\nFiltered by name" << endl;
	// courseList->search("Cl");

	// system("pause");
	return 0;
}
