#include <iostream>
#include <string>
#include "roster.h"


using namespace std;

int main() {
	//modify the “studentData Table” to include your personal information as the last item
	const string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"		,
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK"	,
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"		,
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"		,
	"A5,Dan,Gray,dgra199@wgu.edu,42,3,32,12,SOFTWARE"
	};

	const int numStudents = 5;

	cout << "Scripting & Programming: Applications" << endl << "C++" << endl <<  "Student ID #001395356" << endl << "Dan Gray" << endl;
	
	//create an instance of the Roster class called classRoster
	Roster classRoster(numStudents);

	//add each student to classRoster
	for (int i = 0; i < numStudents; i++) {
		classRoster.parse(studentData[i]);
	}

	classRoster.printAll();
	classRoster.printInvalidEmails();

	//loop through class roster and sum average days in class
	for (int i = 0; i < numStudents; i++) {
		int x = 0;
		string temp = "";
		while (studentData[i][x] != ',') {
			temp += studentData[i][x];
			++x;
		}
		classRoster.printAverageDaysInCourse(temp);
	}

	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
	classRoster.remove("A3");
	classRoster.printAll();
	classRoster.remove("A3");
	return 0;	
}





