
#include "main.h"
#include <iostream>

using namespace std;

int g;

int main()
{
    int a = 10;
    cout << "value: " << a << endl;
    cout << "pointer: " << &a << endl;
    cout << endl;
    funValue(a);
    funPunc(&a);
    funRef(a);

    return 0;
}
/* 
function passing by value. 
Copy the value into an other memory cell.
*/
void funValue(int n)
{
    n = 50;
    cout << "value: " << n << endl;
    cout << "pointer: " << &n << endl;
    cout << endl;
}

/* 
function passing by pointer. 
Input is a pointer and a local pointer copy the address. 
You modify the same cell memory.
*/
void funPunc(int* n)
{
    // verify punct != null
    if(n != NULL){
    // dereference punct
    *n = 50;
    cout << "value: " << *n << endl;
    cout << "pointer: " << n << endl;
    cout << endl;
    } else {
        cout << "null pointer" << endl;
        cout << endl;
    }
}
/* 
function passing by reference. 
funRef access the same memory cell.
The local variables is an alias for the input pointer.
Same sintax with function by value.
Difficlut understand difference by value /by reference
*/
void funRef(int &n)
{
    n = 70;
    cout << "value: " << n << endl;
    cout << "pointer: " << &n << endl;
    cout << endl;
}

