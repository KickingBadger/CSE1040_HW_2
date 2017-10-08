#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Transcript.h"

using namespace std;

Transcript::Transcript() {

}

void Transcript::enrollStudent(StudentBody* stuBod, Catalog* ctlg) {
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

      transcript.push_back(newEnrollment);

      cout << "Enrollment added to list" << endl;
    }
    else if (!transcript.empty()) {
        newEnrollment->setNext(NULL);
        newEnrollment->setPrev(transcript.back());
        transcript.back()->setNext(newEnrollment);

        transcript.push_back(newEnrollment);

        cout << "Enrollment added to list" << endl;
    }

    cout << "Successfully enrolled ";
    cout << stuBod->getStudent(tempStuId)->getName();
    cout << " in ";
    cout << ctlg->getCourse(tempCourId)->getName();
    cout << "." << endl;
}

void Transcript::printEnrollments(StudentBody * stuBod) {
    int tempCourId;

    cout << "Enter Id of desired course: " << endl;
    cin >> tempCourId;

    list<Enrollment*>::iterator it;

    cout << setw(8) << "Name" << setw(12) << "Id" <<endl;
    cout << "--------------------"<< endl;

    for (it = transcript.begin(); it != transcript.end(); ++it) {
        if ((*it)->getCourseId() == tempCourId) {
            cout << setw(8) << stuBod->getStudent((*it)->getStudentId())->getName() << " |" << setw(10) << stuBod->getStudent((*it)->getStudentId())->getId() << endl;
        }
    }
}

void Transcript::addGrade(StudentBody* stuBod, Catalog* ctlg) {
    int grade;
    int tempStuId;
    int tempCourId;

    cout << "Enter the Student's Id: " << endl;
    cin >> tempStuId;
    cout << "Enter the Course Id: " << endl;
    cin >> tempCourId;
    cout << "Enter the grade: " << endl;
    cin >> grade;

    try {
        if(getEnrollment(tempStuId, tempCourId) == NULL) {
            throw runtime_error("No such enrollment.");
        }
        else {
            getEnrollment(tempStuId, tempCourId)->addGrade(grade);
        }
    }
    catch(runtime_error& excpt) {
        cout << excpt.what() << endl;
        cout << "Could not add grade." << endl;
        return;
    }
    cout << "Gave " << stuBod->getStudent(tempStuId)->getName() << " a " << grade << " in " << ctlg->getCourse(tempCourId)->getName() << "." << endl;
    cout << showpoint << fixed;
    cout.precision(2);
    cout << "Average: " << getEnrollment(tempStuId, tempCourId)->getAverage() << endl;
    cout << "Letter Grade: " << getEnrollment(tempStuId, tempCourId)->getLetterGrade() << endl;

}

void Transcript::viewStudentAverage() {
    int tempStuId;
    int tempCourId;

    cout << "Student's Id:" << endl;
    cin >> tempStuId;
    cout << "Course's Id: " << endl;
    cin >> tempCourId;

    cout << fixed << showpoint;
    cout.precision(2);
    cout << "Average: " << getEnrollment(tempStuId, tempCourId)->getAverage() << endl;
    cout << "Letter Grade: " << getEnrollment(tempStuId, tempCourId)->getLetterGrade() << endl;
}

void Transcript::viewCourseAverage(Catalog * ctlg) {
    int tempCourId;
    double stuAvgTotal = 0;
    double courseAvg = 0;
    int numStudents = 0;

    list<Enrollment*>::iterator it;

    cout << "Course's Id: " << endl;
    cin >> tempCourId;

    for(it = transcript.begin(); it != transcript.end(); ++it) {
        if ((*it)->getCourseId() == tempCourId) {
            stuAvgTotal += (*it)->getAverage();
            ++numStudents;
        }
    }

    courseAvg = stuAvgTotal/numStudents;

    cout << "Course Average: " << courseAvg << endl;
}

void Transcript::viewGrades() {
    int tempStuId;
    int tempCourId;
    Enrollment* temp;

    cout << "Student Id: " << endl;
    cin >> tempStuId;
    cout << "Course Id: " << endl;
    cin >> tempCourId;

    temp = getEnrollment(tempStuId, tempCourId);

    cout << fixed << showpoint;
    cout.precision(2);

    for (unsigned int i = 0; i < temp->getGrade()->size(); ++i) {
        cout << "Grade " << i + 1 << ": " << temp->getGrade()->at(i) << endl;
    }
}

Enrollment* Transcript::getEnrollment(int studentId, int courseId) {
    list<Enrollment*>::iterator it;

    for(it = transcript.begin(); it != transcript.end(); ++it) {
        if((*it)->getStudentId() == studentId) {
            if ((*it)->getCourseId() == courseId) {
                return (*it);
            }
        }
    }
    return NULL;
}
