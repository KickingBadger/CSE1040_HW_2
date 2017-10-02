#include <iostream>
#include <string>

using namespace std;

	class StudentBody;

	class Student {
		private:
			int Id;
			string Name;
			//enum Standing {Freshman, Sophomore, Junior, Senior}; //FIXME:Maybe change me to an array?
			int Standing;

			Student *next;
			Student *prev;

		public:
			Student();
			Student(int Id, string Name, int Standing);
			int getId() {return Id;}
			void setId(int newId) {Id = newId;}
			string getName() {return Name;}
			void setName(string newName) {Name = newName;}
			string getStanding();
			void setStanding(int newStanding) {Standing = newStanding;}

			Student* getNext() {return next;}
			void setNext(Student* nextStudent) {next = nextStudent;}
			Student* getPrev() {return prev;}
			void setPrev(Student* prevStudent) {prev = prevStudent;}
	};
