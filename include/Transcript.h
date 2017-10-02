#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Enrollment.h"

using namespace std;

	class Transcript {
		private:
			list<Enrollment*> transcript;
			Enrollment *enrollment_list_head;
			Enrollment *enrollment_list_tail;
		public:
			Transcript();

	};
