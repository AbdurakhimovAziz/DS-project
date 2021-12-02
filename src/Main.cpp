#include <iostream>
#include "Node.h"
#include "Course.h"
#include "CourseList.h"

using namespace std;

Course createCourse()
{
	string name, profName, time, room;
	int dayNum;
	cout << endl;
	cout << "Enter the course name (only first letters): " << endl;
	cin >> name;
	cout << endl;
	cout << "Enter professor's name (N.Surname): " << endl;
	cin.clear();
	cin.ignore();
	getline(cin, profName);
	cout << endl;
	cout << "Choose a day: " << endl;
	cout << "1. Mon\n2. Tue\n3. Wed\n4. Thu\n5. Fri\n(1-5): " << endl;
	cin >> dayNum;
	cout << endl;
	cout << "Enter time (hh:mm): " << endl;
	cin >> time;
	cout << endl;
	cout << "Enter room: " << endl;
	cin >> room;

	Course course(name, profName, dayNum, time, room);

	return course;
}

int main(int argc, char const *argv[])
{
	CourseList *courseList = new CourseList();

	courseList->insert(*new Course("EM", "A.Tomskova", 3, "11:00", "B209"));
	courseList->insert(*new Course("LA", "A.Tomskova", 1, "12:30", "B207"));
	courseList->insert(*new Course("CL", "Ch.An", 4, "15:00", "A202"));
	courseList->insert(*new Course("BK", "N.An", 3, "15:00", "A515"));
	courseList->insert(*new Course("CL", "Ch.An", 1, "16:00", "B201"));
	courseList->insert(*new Course("EM", "A.Tomskova", 1, "10:30", "B201"));
	courseList->insert(*new Course("DS", "A.Seth", 1, "12:00", "B101"));
	courseList->insert(*new Course("DS", "A.Seth", 2, "12:00", "B101"));
	courseList->insert(*new Course("AE", "Sh.Isayeva", 2, "15:00", "B208"));
	courseList->insert(*new Course("AE", "Sh.Isayeva", 5, "12:30", "B208"));
	courseList->insert(*new Course("ApiJ", "A.Tarawade", 5, "09:00", "B103"));

	while (1)
	{
		cout << "Choose one of the options below:" << endl
				 << endl;
		cout << "1. For students" << endl
				 << "2. For professors" << endl
				 << "3. Exit" << endl;
		cout << "Enter 1, 2 or 3: ";
		int option;
		cin >> option;

		system("cls");

		string course_name;

		if (option == 1)
		{
			cout << "Enter the course name to search (only first letters): " << endl;
			cin >> course_name;
			cout << endl;
			courseList->search(course_name);
		}
		else if (option == 2)
		{
			cout << "Choose the action:" << endl
					 << endl;
			cout << "1) add" << endl
					 << "2) search" << endl
					 << "3) edit" << endl
					 << "4) delete" << endl
					 << "5) print all" << endl;
			cout << "Enter 1,2,3,4 or 5: ";
			int a;
			cin >> a;
			int pos;
			Course course;
			cout << endl;
			switch (a)
			{
			case 1:
				course = createCourse();
				courseList->insert(course);
				cout << "\n\nAdded successfully !" << endl
						 << endl;
				courseList->printAll();
				break;
			case 2:
				cout << "Enter the course name to search (only first letters): " << endl;
				cin >> course_name;
				cout << endl;
				courseList->search(course_name);
				break;
			case 3:
				courseList->printAll();
				cout << "\nEnter the position of the course you want to edit : ";
				cin >> pos;
				course = createCourse();
				cout << endl;
				if (courseList->editAt(pos, course))
				{
					cout << endl
							 << "Edited successfully !" << endl
							 << endl;
					courseList->printAll();
				}
				else
				{
					cout << "No course with such index !!!" << endl
							 << endl;
				}
				break;
			case 4:
				courseList->printAll();
				cout << "\nEnter the position of the course you want to delete: ";
				cin >> pos;
				cout << endl;
				if (courseList->deleteAt(pos))
				{
					cout << "\nDeleted succesfully !" << endl
							 << endl;
					courseList->printAll();
				}
				else
				{
					cout << "No course with such index !!!" << endl;
				}
				break;
			case 5:
				courseList->printAll();
				break;
			default:
				cout << "Wrong input !!! Try again !" << endl;
				break;
			}
		}
		else if (option == 3)
		{
			exit(0);
		}
		else
		{
			cout << "Wrong input !!! Try again !" << endl;
		}
		cout << endl
				 << endl;
	}

	return 0;
}