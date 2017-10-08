#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Student.h"

using namespace std;

#ifndef STUDENTBODY_H_
#define STUDENTBODY_H_

	class StudentBody {
		private:
			list<Student*> studentBody;
		public:
			StudentBody();
			list<Student*>::iterator getHead() {return studentBody.begin();}
			Student* getFront() {return studentBody.front();}
			list<Student*>::iterator getTail() {return studentBody.end();}
			Student* getBack() {return studentBody.back();}

			void addStudent();
			void removeStudent();
			void printStudents();

			Student* getStudent(int studentId);

			int getSize() {return studentBody.size();}
			bool isEmpty() {return studentBody.empty();}
	};
#endif
