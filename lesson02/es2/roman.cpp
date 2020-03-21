#include "roman.h"
#include <iostream>
using namespace std;

void print_roman_helper(int v, char s1, char s2, char s3){
    switch(v){
        case 0:
        break;
        case 1:
            cout << s1;
            break;
        case 2:
            cout << s1 << s1;
            break;
        case 3:
            cout << s1 << s1 << s1;
            break;
        case 4:
            cout << s1 << s2;
            break;
        case 5:
            cout << s2;
            break;
        case 6:
            cout << s2 << s1;
            break;
        case 7:
            cout << s2 << s1 << s1;
            break; 
        case 8:
            cout << s2 << s1 << s1 << s1;
            break;
        case 9:
            cout << s1 << s3;
            break;   
    }
}

void print_roman(int n){
    print_roman_helper(n/1000, 'M','?', '?');
    n = n%1000;
    print_roman_helper(n/100, 'C','D', 'M');
    n = n%100;
    print_roman_helper(n/10, 'X','L', 'C');
    n = n%10;
    print_roman_helper(n, 'I','V', 'X');
}