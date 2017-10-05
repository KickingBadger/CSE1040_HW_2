#include <iostream>
#include <string>

using namespace std;

	class Catalog;

	class Course {
		private:
			int Id;
			string Name;
			pair<string, int> Location;
			string startTime;
			string endTime;

			Course *next;
			Course *prev;

		public:
			Course();
			Course(int Id, string Name, pair<string, int>(Location), string startTime, string endTime);
			int getId() {return Id;}
			void setId(int newId) {Id = newId;}
			string getName() {return Name;}
			void setName(string newName) {Name = newName;}
			pair<string, int> getLocation() {return Location;}
			void setLocation(pair<string, int>(newLocation)) {Location = newLocation;}
			string getStartTime() {return startTime;}
			void setStartTime(string newStartTime) {startTime = newStartTime;}
			string getEndTime() {return endTime;}
			void setEndTime(string newEndTime) {endTime = newEndTime;}

			Course* getNext() {return next;}
			void setNext(Course* nextCourse) {next = nextCourse;}
			Course* getPrev() {return prev;}
			void setPrev(Course* prevCourse) {prev = prevCourse;}
	};
