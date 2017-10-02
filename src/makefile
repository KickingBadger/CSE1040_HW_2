IDIR = ../include
CC = g++
CXXFLAGS = -I$(IDIR) -std=c++11

ODIR = obj
LDIR = ../lib

_DEPS = Student.h Course.h Enrollment.h StudentBody.h Catalog.h Transcript.h Functions.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o Student.o Course.o Enrollment.o StudentBody.o Catalog.o Transcript.o Functions.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

Gradebook: $(OBJ)
	g++ -o $@ $^ $(CXXFLAGS)
