les04.exe: main.o CDateClass.o CDateArray.o
	g++ main.o CDateClass.o CDateArray.o -o les04

CDateArray.o: CDateArray.cpp CDateArray.h CDateClass.h
	g++ -g -c CDateArray.cpp 

CDateClass.o: CDateClass.cpp  CDateClass.h
	g++ -g -c CDateClass.cpp 

main.o : main.cpp CDateClass.h CDateArray.h
	g++ -g -c main.cpp 