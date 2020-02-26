// Example program
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
    
     // string only with ""
    string name="Hello World";
    // print cout << --> separatore di parametri. endl = newline

    cout << "int variable: "<< num << endl;
    cout << "double variable: "<< num2 << endl;
    cout << "flag variable: "<< flag << endl;
    cout << "char variable: "<< letter << endl;
    cout << "string variable: "<< name << endl;
    cout << endl;
    
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
    
//PUNTATORI
    // tipo oggetto puntato * nome
    // &var indirizzo di var
    int *p_int = &num;
    cout << "p_int= "<< p_int<< endl;
    // deferenziamento
    int val = *p_int;
    cout << "deferenziamento p_int=num= "<< val<< endl;
    int *p_int2 = &num;
    cout << "p_int2= "<< p_int2<< endl;
    if (p_int == p_int2) cout << p_int <<" is the same memory cell" <<endl;
    int ** p_p_int = &p_int;
    cout << "contenuto di p_p_int="<< p_p_int << endl;
    cout << "dimensione fissa di un puntatore:" << sizeof(p_int) << endl;
    cout << endl;
    
// ARRAY
    // definizione 
    int arrayInt []={0,1,2,3,4,5,6,7,9,9};
    // dichiarazione
    int arr2[10];
    arr2[0]=10;
    cout << "arrayInt[0]= " << arrayInt[0] << endl;
    cout << "arr2[0]= " << arr2[0] << endl;
    int *p_array = arrayInt;
    cout << "puntatore ad array=" << p_array << endl;
    cout << "contenuto p_array=" << *p_array << endl;
    p_array = p_array + 3;
    cout << "p_array + 3;" << "contenuto p_array=" << *p_array << endl;
    cout << "puntatore ad array=" << p_array << endl;
    cout << "diff puntatori = " << p_array - arrayInt << endl;
    
      // array di puntatori
    int *arrayP[3];
    // puntatore ad array di 3 interi
    int (*p_triple)[3];
    
//CAST
    double a;
    a = 10.2;
    int c  = 5;
    const int *p_a = &c;
    char *b;
    

    cout << "a="<< static_cast<int>(a) << endl;
    cout << "p_a="<< const_cast<int*>(p_a) << endl;
    b = reinterpret_cast<char*>(&c);
    cout << "b= "<< b << endl;
    
    return 0;

}

    
   


