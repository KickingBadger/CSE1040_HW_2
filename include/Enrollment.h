#include <iostream>
#include <vector>
#include <string>

using namespace std;

	class Enrollment {
		private:
			int Id;
			int studentId;
			int courseId;
			vector<int> Grades;
			double Average;
			char letterGrade;

			void calcAverage();
			void setLetterGrade();
		public:
			Enrollment();
			Enrollment(int Id, int stuId, int courId);
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
	};
