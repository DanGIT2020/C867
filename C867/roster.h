#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

//roster class
class Roster {
public:
	Roster(int numberOfStudents);
	void parse(string row);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram type);
	void printAll();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void printInvalidEmails();
	void printAverageDaysInCourse(string studentID);
	void remove(string studentID);
	~Roster();

private:
	string degreeProgramStrings(DegreeProgram dp);
	Student** classRosterArray;
	int numStudents;
};
