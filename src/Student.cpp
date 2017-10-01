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
