#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Course.h"

using namespace std;

	class Catalog {
		private:
			list<Course*> catalog;
			Course *course_list_head;
			Course *course_list_tail;
		public:
			Catalog();

	};
