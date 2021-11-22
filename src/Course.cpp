#include "Course.h"

Course::Course() {}

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
		return "Monday";
		break;
	case 2:
		return "Tuesday";
		break;
	case 3:
		return "Wednesday";
		break;
	case 4:
		return "Thursday";
		break;
	case 5:
		return "Friday";
		break;

	default:
		return "";
		break;
	}
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
