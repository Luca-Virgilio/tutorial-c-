test_roman.exe: roman.o test_roman.o
	g++ roman.o test_roman.o -o test_roman

roman.o: roman.cpp roman.h
	g++ -g -c roman.cpp

test_roman.o: test_roman.cpp roman.h
	g++ -g -c test_roman.cpp