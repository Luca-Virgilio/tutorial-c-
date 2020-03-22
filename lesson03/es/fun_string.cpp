#include "fun_string.h"
#include <iostream>

using namespace std;

void print_char(char *word){
    if (word != NULL){

        while (*word != '\0'){
            cout << *word << endl;
            word++;
        }
    }
    else{
        cout << "null pointer" << endl;
    }
}