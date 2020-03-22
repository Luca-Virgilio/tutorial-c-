#include "fun_string.h"
#include <iostream>

using namespace std;

int main (int argc, char *argv[] ){

    char* word = argv[1];
    cout << "param: "<< word << endl;
    print_char(word); 
    return 0;
}