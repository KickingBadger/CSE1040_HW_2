#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Enrollment.h"

using namespace std;

	class Transcript {
		private:
			list<Enrollment*> transcript;
		public:
			Transcript();
			list<Enrollment*>::iterator getHead() {return transcript.begin();}
			Enrollment* getFront() {return transcript.front();}
			list<Enrollment*>::iterator getTail() {return transcript.end();}
			Enrollment* getBack() {return transcript.back();}

			void enrollStudent();
			void unenrollStudent();
			void printEnrollments();

			int getSize() {return transcript.size();}
			bool isEmpty() {return transcript.empty();}

	};
