#include <iostream>
#include "Enrollment.h"

using namespace std;

Enrollment::Enrollment() {

}

Enrollment::Enrollment(int newId, int newStuId, int newCourId) {
  Id = newId;
  studentId = newStuId;
  courseId = newCourId;
}

void Enrollment::addGrade(int Grade) {

  if (Grades.size() < 10) {
    Grades.push_back(Grade);
  }
  else if (Grades.size() == 10) {
    cout << "You have already enter the maximum grades for this student in this course." << endl;
    return;
  }

  calcAverage();

  return;
}

int Enrollment::getGrade(int i) {

  if (Grades.size() != 0) {
    return Grades.at(i);
  }
  else {
    cout << "No Grades for this student in this class." << endl;
  }
}

void Enrollment::setGrade(int i, int Grade) {

  if (Grades.size() == 0) {
    cout << "No Grades for this student in this class." << endl;
    return;
  }

  if (!Grades.at(i)) {
    cout << "No grade to change, try adding a grade first." << endl;
    return;
  }

  Grades.at(i) = Grade;

  calcAverage();

  return;
}

void Enrollment::calcAverage() {
  int temp;

  for (int i =0; i < Grades.size(); ++i) {
    temp = temp + Grades.at(i);
  }

  Average = temp / Grades.size();

  setLetterGrade();

  return;
}

void Enrollment::setLetterGrade() {

  if (Average >= 90) {
    letterGrade = 'A';
  }
  else if (Average >= 80) {
    letterGrade = 'B';
  }
  else if (Average >= 70) {
    letterGrade = 'C';
  }
  else if (Average >= 60) {
    letterGrade = 'D';
  }
  else {
    letterGrade = 'F';
  }

  return;
}
