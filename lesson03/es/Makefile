test_string.exe: fun_string.o test.o
	g++ fun_string.o test.o -o test_string

fun_string.o: fun_string.cpp fun_string.h
	g++ -g -c fun_string.cpp 

test.o : test.cpp fun_string.h
	g++ -g -c test.cpp

