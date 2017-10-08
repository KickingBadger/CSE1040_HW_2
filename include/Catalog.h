#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Course.h"

using namespace std;

#ifndef CATALOG_H_
#define CATALOG_H_

	class Catalog {
		private:
			list<Course*> catalog;
			Course *course_list_head;
			Course *course_list_tail;
		public:
			Catalog();
			list<Course*>::iterator getHead() {return catalog.begin();}
			Course* getFront() {return catalog.front();}
			list<Course*>::iterator getTail() {return catalog.end();}
			Course* getBack() {return catalog.back();}

			void addCourse();
			void removeCourse();
			void printCourses();

			Course* getCourse(int courseId);

			int getSize() {return catalog.size();}
			bool isEmpty() {return catalog.empty();}
	};
#endif
