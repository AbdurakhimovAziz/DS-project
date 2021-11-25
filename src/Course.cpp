#include "Course.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Course::Course()
{
}

Course::Course(string name, string prof, int dayNum, string time, string room)
{
	setName(name);
	setProfessor(prof);
	setDay(dayNum);
	setTime(time);
	setRoom(room);
}

void Course::setName(string name)
{
	this->name = name;
}

void Course::setProfessor(string prof)
{
	this->professor = prof;
}

void Course::setDay(int dayNum)
{
	this->dayNum = dayNum;
	this->day = defineDay(dayNum);
}

void Course::setTime(string time)
{
	this->time = time;
}

void Course::setRoom(string room)
{
	this->room = room;
}

string Course::defineDay(int dayNum)
{
	switch (dayNum)
	{
	case 1:
		return "Mon";
		break;
	case 2:
		return "Tue";
		break;
	case 3:
		return "Wed";
		break;
	case 4:
		return "Thu";
		break;
	case 5:
		return "Fri";
		break;

	default:
		return "";
		break;
	}
}

void Course::print()
{
	cout << name << "  \t" << day << "\t" << time << "\t" << room << "\t" << professor << endl;
}

string Course::getName()
{
	return name;
}

string Course::getProfessor()
{
	return professor;
}
string Course::getDay()
{
	return day;
}
string Course::getTime()
{
	return time;
}
string Course::getRoom()
{
	return room;
}

int Course::getDayNum()
{
	return dayNum;
}