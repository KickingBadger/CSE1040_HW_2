  class StudentBody;
  class Catalog;
  class Transcript;

using namespace std;

//Menus
void courseMenu(Catalog * ctlg);//Print menu with course related functions
void studentMenu(StudentBody * stuBod);//Print menu with student related functions
void transcriptMenu(StudentBody * stuBod, Catalog * ctlg, Transcript * tran);//Print menu with enrollment/grade related functions
void reportMenu(StudentBody * stuBod, Catalog * ctlg, Transcript * tran);//Print menu with average related functions
void dataMenu(StudentBody * stuBod, Catalog * ctlg, Transcript * tran);//Print menu with data management functions
