#include <iostream>
#include <string>

using namespace std;

	class Student {
		private:
		int Id;
		string Name;
		enum Classification {Freshman, Sophomore, Junior, Senior}; //FIXME:Maybe change me to an array?
		
		public:
		Student();
		int getId() {return Id;}
		void setId(int x) {Id = x;}
	};