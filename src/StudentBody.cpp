#include <iostream>
#include <string>
#include <iomanip>

#include "StudentBody.h"

using namespace std;

StudentBody::StudentBody() {

}

void StudentBody::addStudent(StudentBody* stuBod){
  int tempId;
  string tempString;
  int tempStand;

  cout << "Pleasae enter the student's name: " << endl;
  cin >> tempString;

  cout << "Please enter the student's Id and current standing(as an integer from 1-4): " << endl;
  cin >> tempId >> tempStand;

  Student *newStudent = new Student(tempId, tempString, tempStand);

  if (studentBody.empty()) {
    newStudent->setNext(NULL);
    newStudent->setPrev(NULL);

    studentBody.insert(studentBody.end(), newStudent);
  }
  else if (!studentBody.empty()) {
    newStudent->setNext(NULL);
    newStudent->setPrev(studentBody.back());
    studentBody.back()->setNext(newStudent);

    studentBody.insert(studentBody.end(), newStudent);
  }

  cout << "Successfully added " << newStudent->getName() << " to the database" << endl;
  cout << " with Id: " << newStudent->getId() << " and current standing of " << newStudent->getStanding() <<  "." << endl;
}

void StudentBody::printStudents(StudentBody* stuBod) {

  cout << setw(8) << "Name" << setw(12) << "Id" << setw(12) << "Standing" << endl;
  cout << "---------------------------------" << endl;

  list<Student*>::iterator it;
  it = studentBody.begin();

  for (it = studentBody.begin(); it != studentBody.end(); ++it) {
    cout << setw(8) << (*it)->getName() << " |"<< setw(10) << (*it)->getId() << " |" << setw(10) << (*it)->getStanding() << endl;
  }
}
