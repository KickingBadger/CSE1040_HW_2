#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Enrollment.h"
#include "StudentBody.h"
#include "Catalog.h"

using namespace std;

#ifndef TRANSCRIPT_H_
#define TRANSCRIPT_H_

	class Transcript {
		private:
			list<Enrollment*> transcript;
		public:
			Transcript();
			list<Enrollment*>::iterator getHead() {return transcript.begin();}
			Enrollment* getFront() {return transcript.front();}
			list<Enrollment*>::iterator getTail() {return transcript.end();}
			Enrollment* getBack() {return transcript.back();}

			void enrollStudent(StudentBody* stuBod, Catalog* ctlg);
			void addGrade(StudentBody* stuBod, Catalog* ctlg);
			void printEnrollments(StudentBody * stuBod);

			void viewStudentAverage();
			void viewCourseAverage(Catalog * ctlg);
			void viewGrades();

			Enrollment* getEnrollment(int studentId, int courseId);
			Enrollment* getEnrollment(int courseId);

			int getSize() {return transcript.size();}
			bool isEmpty() {return transcript.empty();}

	};
#endif
