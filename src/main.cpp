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
#include "Functions.h"
#include "StudentBody.h"
#include "Catalog.h"
#include "Transcript.h"

using namespace std;

int main () {
	StudentBody studentBody;
	Catalog catalog;
	Transcript transcript;

	int selection = -1;

	cout << "CSCE 1040\nProgram 1\nName: Justin Hinton\nEmail: justinhinton@my.unt.edu" << endl;


	do {

		cout << endl;
		cout << "Which action would you like to take?" << endl;
		cout << "1 - Manage Courses\n2 - Manage Students\n3 - Manage Transcripts\n4 - View Averages\n5 - Save/Load a Database\n0 - Quit Application" << endl;
		cin >> selection;

		switch(selection) {
			case 1: courseMenu(&catalog); break;//FIXME:Course Menu
			case 2: studentMenu(&studentBody); break;//FIXME:Student Menu
			case 3: transcriptMenu(&studentBody, &catalog, &transcript); break;//FIXME:Enrollment Menu
			case 4: reportMenu(&studentBody, &catalog, &transcript); break;//FIXME:Report Menu
			case 5: dataMenu(&studentBody, &catalog, &transcript); break;//FIXME:Save/Load Menu
			default:
				if (selection != 0) {
					cout << "Unsupported Choice. Please Try Again." << endl; break;
				}
		}
	}while (selection != 0);

	return 0;
};
