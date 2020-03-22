
#include "main.h"
#include <iostream>

using namespace std;

int g;

int main()
{
    int a = 10;
    cout << "value: " << a << endl;
    cout << "punctuator: " << &a << endl;
    cout << endl;
    funValue(a);
    funPunc(&a);
    funRef(a);

    return 0;
}
/* 
function by value. 
Copy the value into an other memory cell.
*/
void funValue(int n)
{
    n = 50;
    cout << "value: " << n << endl;
    cout << "punctuator: " << &n << endl;
    cout << endl;
}

/* 
function by punctuactor. 
Input is a punctuator and you modify the same cell memory.
*/
void funPunc(int* n)
{
    // verify punct != null
    if(n != NULL){
    // dereference punct
    *n = 50;
    cout << "value: " << *n << endl;
    cout << "punctuator: " << n << endl;
    cout << endl;
    } else {
        cout << "null punctuator" << endl;
        cout << endl;
    }
}
/* 
function by reference. 
funRef access the same memory cell.
Same sintax with function by value.
Difficlut understand difference by value /by reference
*/
void funRef(int &n)
{
    n = 70;
    cout << "value: " << n << endl;
    cout << "punctuator: " << &n << endl;
    cout << endl;
}

