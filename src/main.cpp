/*
	Name: 		Justin Hinton
	Section: 	003
	e-mail: 	justinhinton@my.unt.edu
	Purpose: 	The function of this program is to
				implement a rudimentary grade book system using
				C++ only and oop concepts.
*/
//Required Libraries
#include <iostream>
#include <string>

//User Created Libraries
#include "StudentBody.h"
#include "Catalog.h"
#include "Transcript.h"

using namespace std;

int main () {

	int temp;

	Enrollment Student1(1, 2417599, 1200);

	cout << Student1.getId() << endl;
	cout << Student1.getStudentId() << endl;
	cout << Student1.getCourseId() << endl;


	cin >> temp;


	return 0;
};
