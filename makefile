vpath %.h include

Gradebook: main.o Student.o Course.o Enrollment.o StudentBody.o Catalog.o Transcript.o
	g++ -o Gradebook main.o Student.o Course.o Enrollment.o StudentBody.o Catalog.o Transcript.o

main.o: main.cpp StudentBody.h Catalog.h Transcript.h
	g++ -c main.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

Course.o: Course.cpp Course.h
	g++ -c Course.cpp

Enrollment.o: Enrollment.cpp Enrollment.h
	g++ -c Enrollment.cpp

Students.o: Students.cpp Students.h
	g++ -c Students.cpp

Catalog.o: Catalog.cpp Catalog.h
	g++ -c Catalog.cpp

Transcript.o: Transcript.cpp Transcript.h
	g++ -c Transcript.cpp
