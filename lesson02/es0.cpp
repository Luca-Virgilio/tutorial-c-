#include <iostream>
#include <cmath>

using namespace std;

int main () {
    
    int numInt;
    cout << "inseirie il numero di intervalli con cui calcolare l\'integrale" << endl;
    cin >> numInt;

    float a,b;
    a = 0;
    b = 3.141;
    float xk = (b-a)/numInt;
    cout << "xk= " << xk << endl;
    float res = 0;
    
    float values[numInt+1];
    values[0]= a;
    for (int k = 1; k<=numInt; k++){
        values[k]= values[k-1]+xk;
        cout << values[k] <<"\t";
    }
    cout << endl;
    for (int i = 1; i<=numInt; i++){
        res = res + (sin(values[i-1])+sin(values[i]))*xk/2;
        cout << i << " res=" << res << "\t"<< endl;  
    }

    return 0;
}