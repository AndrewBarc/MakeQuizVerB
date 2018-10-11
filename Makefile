.PHONY: all clean build doc myexe doczip
CC = g++
all: build doczip

clean:
	-rm *.o myexe a.out
	-rm -r html latex
build: college.o collegemain.o course.o node.h tarray.h
	$(CC) college.o collegemain.o course.o

myexe: college.o collegemain.o course.o node.h tarray.h
	$(CC) college.o collegemain.o course.o -o myexe
college.o: college.cc college.h
	$(CC) -c college.cc
collegemain.o: collegemain.cc
	$(CC) -c collegemain.cc
course.o: course.cc course.h
	$(CC) -c course.cc
doc: Doxyfile college.o collegemain.o course.o node.h tarray.h
	doxygen Doxyfile
doczip:
	tar cvzf college.tgz ~/MakeQuizVerB
