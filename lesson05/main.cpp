#include "operator.h"
#include <iostream>
using namespace std;

int main (int argc, char *argv []){

    Complex a;
    Complex b (10,3);
    Complex c = b;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    if(c>a){
        cout << c <<" is grater than " << a<< endl;
    }

    return 0;
}