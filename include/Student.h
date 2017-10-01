#include <iostream>
#include <string>

using namespace std;

	class Student {
		private:
		int Id;
		string Name;
		enum Standing {Freshman, Sophomore, Junior, Senior}; //FIXME:Maybe change me to an array?
		Standing standing;

		public:
		Student(int Id, string Name, Standing standing);
		int getId() {return Id;}
		void setId(int newId) {Id = newId;}
		string getName() {return Name;}
		void setName(string newName) {Name = newName;}
		Standing getStanding() {return standing;}
		void setStanding(Standing newStanding) {standing = newStanding;}
	};
