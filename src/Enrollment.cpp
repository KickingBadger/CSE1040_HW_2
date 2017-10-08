#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Enrollment.h"

using namespace std;

Enrollment::Enrollment() {

}

Enrollment::Enrollment(int newStuId, int newCourId) {
  Id = generateId();
  studentId = newStuId;
  courseId = newCourId;
  next = NULL;
  prev = NULL;
  Average = 0;
  letterGrade = 'x';
}

int Enrollment::generateId() {
    int newId;

    srand(time(NULL));

    newId = rand() % 100000000 + 10000000;

    return newId;
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

void Enrollment::calcAverage() {
  int temp = 0;

  for (unsigned int i =0; i < Grades.size(); ++i) {
    temp = temp + Grades.at(i);
  }

  Average = temp / double (Grades.size());

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
