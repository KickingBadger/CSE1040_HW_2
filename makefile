CC = g++
CXXFLAGS = -c -Wall
VPATH = src:../include


#Gradebook: main.o Student.o Course.o Enrollment.o StudentBody.o Catalog.o Transcript.o
	#$(CC) -o Gradebook main.o Student.o Course.o Enrollment.o StudentBody.o Catalog.o Transcript.o

main.o: main.cpp StudentBody.h Catalog.h Transcript.h
	g++ -c -Wall $< -o $@
