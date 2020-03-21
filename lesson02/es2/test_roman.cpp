#include "roman.h"
#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "inserire un numero da 1 a 3999" << endl;
    cin >> value;
    if (value < 1 || value > 3999)
    {
        cerr << "Invalid number for conversion: " << value << endl;
        return 2;
    }
    else
    {
        cout << "the number " << value << " in Roman conversion is:" << endl;
        print_roman(value);
        cout << endl;
        return 0;
    }
}