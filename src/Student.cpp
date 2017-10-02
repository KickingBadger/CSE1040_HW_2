#include <iostream>
#include "Student.h"

using namespace std;

Student::Student() {//Default Constructor

}

Student::Student(int newId, string newName, int newStanding) {//Constructor if you know all the info about a new Course
	Id = newId;
	Name = newName;
	Standing = newStanding;
}

string Student::getStanding() {
	if (Standing == 1) {
		return "Freshman";
	}
	else if (Standing == 2) {
		return "Sophomore";
	}
	else if (Standing == 3) {
		return "Junior";
	}
	else if (Standing == 4) {
		return "Senior";
	}
	else {
		return "Invalid Standing.";
	}
}
