#include "fun_string.h"
#include <iostream>

using namespace std;

int main (int argc, char *argv[] ){

    char* input = argv[1];
    cout << "param: "<< input << endl;
    // print_char(input); 
    int len = string_length(input);
    cout << "string length: " << len << endl;
    // inverse(input);
    // cout << "inverted: " << input << endl;
    char *copyInput = copy(input);
    cout << "str_copy: "<< copyInput << endl;

    char *concatString = concat(argv[1], argv[2]);
    cout << "concat string: " << concatString << endl;
    // delete [] concatString;
    // concatString = NULL;



    return 0;
}