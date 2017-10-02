#include <iostream>
#include <vector>

using namespace std;

	class Transcript;

	class Enrollment {
		private:
			int Id;
			int studentId;
			int courseId;
			vector<int> Grades;
			double Average;
			char letterGrade;

			Enrollment *next;
			Enrollment *prev;

			void calcAverage();
			void setLetterGrade();

		public:
			Enrollment();
			Enrollment(int Id, int stuId, int courId, Transcript* tran);
			int getId() {return Id;}
			void setId(int newId) {Id = newId;}
			int getStudentId() {return studentId;}
			void setStudentId(int newId) {studentId = newId;}
			int getCourseId() {return courseId;}
			void setCourseId(int newId) {courseId = newId;}
			void addGrade(int Grade);
			int getGrade(int i);
			void setGrade(int i, int newGrade);
			double getAverage() {return Average;}
			char getLetterGrade() {return letterGrade;}

			Enrollment* getNext() {return next;}
			void setNext(Enrollment* nextEnrollment) {next = nextEnrollment;}
			Enrollment* getPrev() {return prev;}
			void setPrevEnrollment(Enrollment* prevEnrollment) {prev = prevEnrollment;}
	};
