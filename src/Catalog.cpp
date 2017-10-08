#include <iostream>
#include <iomanip>

#include "Catalog.h"

using namespace std;

Catalog::Catalog() {

}

void Catalog::addCourse() {
    int tempId;
    string tempString;
    string tempBuilding;
    int tempRoom;
    string tempStart;
    string tempEnd;

    cout << "Please enter the Course's name: " << endl;
    cin >> tempString;

    cout << "Please enter the Course's Id: " << endl;
    cin >> tempId;

    cout << "Please enter the Course's Building and Room Number: " << endl;
    cin >> tempBuilding >> tempRoom;

    cout << "Please enter the Course's Start and End Times: " << endl;
    cin >> tempStart >> tempEnd;

    Course *newCourse = new Course(tempId, tempString, make_pair(tempBuilding, tempRoom), tempStart, tempEnd);

    if (catalog.empty()) {
      newCourse->setNext(NULL);
      newCourse->setPrev(NULL);

      catalog.push_back(newCourse);
    }
    else if (!catalog.empty()) {
      newCourse->setNext(NULL);
      newCourse->setPrev(catalog.back());
      catalog.back()->setNext(newCourse);

      catalog.push_back(newCourse);
    }

    cout << "Successfully added " << newCourse->getName() << " to the Catalog" << endl;
    cout << "with Id " << newCourse->getId() << ", Location: " << newCourse->getLocation().first << " " << newCourse->getLocation().second  << ", " << endl;
    cout << "Start Time: " << newCourse->getStartTime() << ", and End Time:  " << newCourse->getEndTime() << "." << endl;

}

void Catalog::printCourses() {
    cout << setw(8) << "Name" << setw(12) << "Id" << setw(16) << " Location" << setw(16) << "Class Time" << endl;
    cout << "----------------------------------------------------" << endl;

    list<Course*>::iterator it;
    it = catalog.begin();

    for (it = catalog.begin(); it != catalog.end(); ++it) {
      cout << setw(8) << (*it)->getName() << " |"<< setw(10) << (*it)->getId() << " |" << setw(10) << (*it)->getLocation().first <<  " " <<(*it)->getLocation().second;
      cout << " |" << setw(6) << (*it)->getStartTime() << " - " <<  setw(4) << (*it)->getEndTime() << endl;
    }
}

Course* Catalog::getCourse(int courseId) {
   list<Course*>::iterator it;

    for(it = catalog.begin(); it != catalog.end(); ++it) {
        if((*it)->getId() == courseId) {
            return (*it);
        }
    }
    return NULL;
}
