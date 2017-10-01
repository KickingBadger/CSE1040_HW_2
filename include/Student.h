#include <iostream>
#include <string>

using namespace std;

	class Student {
		private:
			int Id;
			string Name;
			//enum Standing {Freshman, Sophomore, Junior, Senior}; //FIXME:Maybe change me to an array?
			int Standing;


		public:
			Student();
			Student(int Id, string Name, int Standing);
			int getId() {return Id;}
			void setId(int newId) {Id = newId;}
			string getName() {return Name;}
			void setName(string newName) {Name = newName;}
			int getStanding() {return Standing;}
			void setStanding(int newStanding) {Standing = newStanding;}
	};
