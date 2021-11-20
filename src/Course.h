#pragma once
#include <string>

using std::string;

class Course
{
private:
	string name, professor, day, time, room;
	int dayInt; // 1 for Monday, 2 for Tuesday and etc...  to compare values

public:
	Course();
	Course(string name, string prof, int dayInt, string time, string room);
	void setName(string name);
	void setProfessor(string prof);
	void setDay(int dayInt); // call defineDay(dayInt)
	void setTime(string time);
	void setRoom(string room);

	string getName();
	string getProfessor();
	string getDay();
	string getTime();
	string getRoom();

	string defineDay(int dayInt); // convert from integer to string using switch
};