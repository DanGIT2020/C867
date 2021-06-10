#include <iostream>
#include <string>
#include "student.h"

//student class
Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	this->degreeProgram = DegreeProgram::NETWORKING;

	for (int i = 0; i < 3; i++) {
		days[i] = 0;
	}
}

Student::Student(string ID, string first, string last, string emailAddress, int studentAge, int days[3], DegreeProgram type)
	: studentID(ID), firstName(first), lastName(last), email(emailAddress), age(studentAge)
{
	degreeProgram = type;
	this->days[0] = days[0];
	this->days[1] = days[1];
	this->days[2] = days[2];
}

//getters
string Student::GetStudentID() {
	return studentID;
}

string Student::GetFirstName() {
	return firstName;
}

string Student::GetLastName() {
	return lastName;
}

string Student::GetEmail() {
	return email;
}

int Student::GetAge() {
	return age;
}

int* Student::GetDays() {
	return days;
}

DegreeProgram Student::GetDegreeProgram() {
	return degreeProgram;
}

//setters
void Student::SetStudentID(string studentId) {
	studentId = studentId;
	return;
}

void Student::SetFirstName(string firstName) {
	firstName = firstName;
	return;
}

void Student::SetLastName(string lastName) {
	lastName = lastName;
	return;
}

void Student::SetEmail(string emailAddress) {
	email = emailAddress;
	return;
}

void Student::SetDays(int daysForCourse[]) {
	for (int i = 0; i < 3; i++) days[i] = daysForCourse[i];
}

void Student::SetAge(int studentAge) {
	this->age = studentAge;
	return;
}

void Student::SetDegreeProgram(DegreeProgram dp)
{
	degreeProgram = dp;
}

string Student::degreeProgramStrings(DegreeProgram dp)
{
	if (dp == DegreeProgram::NETWORKING)
		return "Networking";
	else if (dp == DegreeProgram::SECURITY)
		return "Security";
	else
		return "Software";
}

void Student::print() {
	cout << GetStudentID() << "\t";
	cout << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName();
	cout << "\t Age: " << GetAge();
	cout << "\tdaysInCourse: {" << days[0] << ", " << days[1] << ", " << days[2] << "}";
	cout << " Degree Program: " << degreeProgramStrings(degreeProgram) << "." << endl;
}

//destructor
Student::~Student() {

}