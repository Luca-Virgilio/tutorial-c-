// Example program
#include "main.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//TIPI SEMPLICI
	// int, double, float, char, bool
	int num = 10;
	double num2 = 7.5;
	bool flag = false;
	char letter = 'A';

	simpleType(num, num2, flag, letter);

	modifierDimension(letter, num, num2);

	punctuators(num);

	array();

	compoundType();

	cast();

	return 0;
}

//TIPI SEMPLICI
// int, double, float, char, bool
void simpleType(int num, double num2, bool flag, char letter)
{
	// string only with ""
	string name = "Hello World";
	// print cout << --> separatore di parametri. endl = newline

	cout << "int variable: " << num << endl;
	cout << "double variable: " << num2 << endl;
	cout << "flag variable: " << flag << endl;
	cout << "char variable: " << letter << endl;
	cout << "string variable: " << name << endl;
	cout << endl;
}

void modifierDimension(char letter, int num, double num2)
{
	//MODIFIER
	// unsigned, long, short
	unsigned int ui = 24;
	cout << "before modifier:" << ui << endl;
	cout << endl;

	//DIMENSIONE E TIPO
	// sizeof ritorna la dimensione multipla di char. char è almeno 8 bit
	cout << "size of char= " << sizeof(letter) << endl;
	cout << "size of int= " << sizeof(num) << endl;
	cout << "size of double= " << sizeof(num2) << endl;
	cout << endl;
}

void punctuators(int num)
{
	//PUNTATORI
	// tipo oggetto puntato * nome
	// &var indirizzo di var
	int *p_int = &num;
	cout << "p_int= " << p_int << endl; // res hex
	// deferenziamento
	int val = *p_int;
	cout << "deferenziamento p_int=num= " << val << endl; // res 10
	int *p_int2 = &num;
	cout << "p_int2= " << p_int2 << endl;
	if (p_int == p_int2)
		cout << p_int << " is the same memory cell" << endl;
	int **p_p_int = &p_int; // puntatore di una cella contenente un puntatore
	cout << "contenuto di p_p_int=" << p_p_int << endl;
	cout << "dimensione fissa di un puntatore:" << sizeof(p_int) << endl;
	cout << endl;
}

void array()
{
	// ARRAY
	// definizione
	int arrayInt[] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 9};
	// dichiarazione
	int arr2[10];
	arr2[0] = 10;
	cout << "arrayInt[0]= " << arrayInt[0] << endl;
	cout << "arr2[0]= " << arr2[0] << endl;
	int *p_array = arrayInt;
	cout << "puntatore ad array=" << p_array << endl; // puntatore al primo elemento
	cout << "contenuto p_array=" << *p_array << endl; // res 10
	p_array = p_array + 3;
	cout << "p_array + 3;"
		  << "contenuto p_array=" << *p_array << endl;			  // res 3
	cout << "puntatore ad array=" << p_array << endl;			  // hex
	cout << "diff puntatori = " << p_array - arrayInt << endl; // numero di elementi

	// array di puntatori
	int *arrayP[3];
	// puntatore ad array di 3 interi
	int(*p_triple)[3];
}

void cast()
{
	//CAST
	double a= 10.2;
	int c = 5;
	const int *p_a = &c;
	char *b;
	// semplice
	cout << "a=" << static_cast<int>(a) << endl;
	// se variabile costante
	cout << "p_a=" << const_cast<int *>(p_a) << endl;
	//
	b = reinterpret_cast<char *>(&a);
	cout << "b= " << b << endl;
}

void compoundType()
{
	//STRUCT
	struct Point
	{
		int x;
		int y;
	};
	// !!! ricordarsi ;

	Point pt;
	Point *ppt = &pt;
	// accesso all'attributo
	pt.x = 10;
	ppt->y = 43;
	cout << "pt.x= " << pt.x << endl;
	cout << "pt.y= " << pt.y << endl;

	//ENUM
	enum giorno {lun=1,mar,merc,gio,ven,sab,dom};
	// se non specificato, mar = x+1, merc x+2 ...
	giorno g= sab;
	int d = g;
	cout << "d= " << d << endl;

	//NUOVI NOMI
	typedef unsigned long int uli;
	cout << "dimensione fissa uli:" << sizeof(uli) << endl;

	//CONST
	// variabile constante
	const int a = 10;
	// puntatore a variabile costante
	int b = 200;
	const int *p_b = &b;
	// puntatore costante a variabile 
	int c = 200;
	int *const p_c = &c;
	// puntatore costante a variabile costante
	int e = 20;
	const int *const p_e=&e;

}
