#include <iostream>
using namespace std;

int main (){
    
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