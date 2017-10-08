#include <iostream>

#include "StudentBody.h"
#include "Catalog.h"
#include "Transcript.h"


using namespace std;

  class Catalog;
  class Transcript;
  class StudentBody;

void courseMenu(Catalog * ctlg) {

	system("cls");

	int choice = -1;

	cout << "What would you like to do?" << endl;
	cout << "1 - Create a Course" << endl;
	cout << "2 - View Catalog" << endl;
	cout << "3 - View Enrollment" << endl;
	cout << "0 - Return to Previous Menu" << endl;

	cin >> choice;

	switch(choice) {
		case 1: ctlg->addCourse(); break;
		case 2: ctlg->printCourses(); break;
		case 3: break;
		case 0: return;
	}
}

void studentMenu(StudentBody * stuBod) {
	system("cls");

	int choice = -1;

	cout << "What would you like to do?" << endl;
	cout << "1 - Add a Student" << endl;
	cout << "2 - View Enrolled Students" << endl;
	cout << "0 - Return to Previous Menu" << endl;

	cin >> choice;

	switch(choice) {
		case 1: stuBod->addStudent(); break;
		case 2: stuBod->printStudents(); break;
		case 0: return;
	}
}

void transcriptMenu(StudentBody * stuBod, Catalog * ctlg, Transcript * tran) {

	system("cls");

	int choice = -1;

	cout << "What would you like to do?" << endl;
	cout << "1 - Enroll a Student" << endl;
	cout << "2 - Enter a Grade" << endl;
	cout << "3 - Print Grades" << endl;
	cout << "0 - Return to Previous Menu" << endl;

	cin >> choice;

	switch(choice) {
		case 1: tran->enrollStudent(stuBod, ctlg); break;
		case 2: tran->addGrade(); break;
		case 3: tran->printEnrollments(); break;
		case 0: return;
	}
}

void reportMenu(StudentBody * stuBod, Catalog * ctlg, Transcript * tran) {
	system("cls");

	int choice = -1;

	cout << "What would you like to do?" << endl;
	cout << "1 - View Student Averages" << endl;
	cout << "2 - View Course Averages" << endl;
	cout << "0 - Return to Previous Menu" << endl;

	cin >> choice;

	switch(choice) {
		case 1: break;
		case 2: break;
		case 0: return;
	}
}

void dataMenu(StudentBody * stuBod, Catalog * ctlg, Transcript * tran) {
	system("cls");

	int choice = -1;

	cout << "What would you like to do?" << endl;
	cout << "1 - Save Data" << endl;
	cout << "2 - Load Data" << endl;
	cout << "0 - Return to Previous Menu" << endl;

	cin >> choice;

	switch(choice) {
		case 1: break;
		case 2: break;
		case 0: return;
	}
}
