#include <iostream>

#include "Transcript.h"

using namespace std;

Transcript::Transcript() {

}

void Transcript::enrollStudent() {
    int tempStuId;
    int tempCourId;

    cout << "Enter the Student's Id:" << endl;
    cin >> tempStuId;

    cout << "Enter the Course's Id:" << endl;
    cin >> tempCourId;

    Enrollment *newEnrollment = new Enrollment(tempStuId, tempCourId);

    if (transcript.empty()) {
      newEnrollment->setNext(NULL);
      newEnrollment->setPrev(NULL);

      transcript.insert(transcript.end(), newEnrollment);
    }
    else if (!transcript.empty()) {
      newEnrollment->setNext(NULL);
      newEnrollment->setPrev(transcript.back());
      transcript.back()->setNext(newEnrollment);

      transcript.insert(transcript.end(), newEnrollment);
    }

    cout << "Successfully enrolled " << newEnrollment << " in " << newEnrollment->getCourseId() << endl;
}

void Transcript::unenrollStudent() {

}

void Transcript::printEnrollments() {

}
