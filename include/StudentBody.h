#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Student.h"

using namespace std;

	class StudentBody {
		private:
			list<Student*> studentBody;
		public:
			StudentBody();
			list<Student*>::iterator getHead() {return studentBody.begin();}
			Student* getFront() {return studentBody.front();}
			list<Student*>::iterator getTail() {return studentBody.end();}
			Student* getBack() {return studentBody.back();}

			void addStudent(StudentBody* stuBod);
			void removeStudent();
			void printStudents(StudentBody* stuBod);
			int getSize() {return studentBody.size();}
			bool isEmpty() {return studentBody.empty();}
	};
