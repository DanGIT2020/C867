#pragma once
#include <iostream>
#include <string>
#include "degree.h"

using namespace std;
//student class
class Student {
public:
	Student();
	Student(string studentId, string firstName, string lastName, string emailAddress, int age, int days[3], DegreeProgram type);
	~Student();
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmail();
	int GetAge();
	int* GetDays();
	DegreeProgram GetDegreeProgram();
	void SetStudentID(string studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmail(string emailAddress);
	void SetAge(int studentAge);
	void SetDays(int daysInCourse[]);
	void SetDegreeProgram(DegreeProgram dp);
	virtual void print();
private:
	string degreeProgramStrings(DegreeProgram dp);
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int days[3];
	DegreeProgram degreeProgram;
};