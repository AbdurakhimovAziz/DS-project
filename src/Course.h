#pragma once
#include <string>

using std::string;

class Course
{
private:
	string name, professor, day, time, room;
	int dayNum; // 1 for Monday, 2 for Tuesday and etc...  to compare values

public:
	Course();
	Course(string name, string prof, int dayNum, string time, string room);
	void setName(string name);
	void setProfessor(string prof);
	void setDay(int dayNum); // call defineDay(dayNum)
	void setTime(string time);
	void setRoom(string room);

	void print();

	string getName();
	string getProfessor();
	string getDay();
	string getTime();
	string getRoom();
	int getDayNum();

	string defineDay(int dayNum); // convert from integer to string using switch
};