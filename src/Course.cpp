#include <iostream>
#include "Course.h"

using namespace std;

Course::Course() {//Default Constructor

}

Course::Course(int newId, string newName, pair<string, int>(newLocation), string newStartTime, string newEndTime) {//Constructor if you know all the info about a new Course
  Id = newId;
  Name = newName;
  Location.first = newLocation.first;
  Location.second = newLocation.second;
  startTime = newStartTime;
  endTime = newEndTime;
  next = NULL;
  prev = NULL;
}
