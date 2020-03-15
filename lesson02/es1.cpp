#include "es1.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double x;
    cout << "inserire un numero reale positivo di cui viene fatta la radice quadrata" << endl;
    cin >> x;

    const double epsilon = 0.001;

    double res = nsqrt(x, epsilon);
    cout << "my function res: " << res << endl;
    cout << "library res" << sqrt(x) << endl;

    return 0;
}

double nsqrt(double x, double epsilon)
{
    double s = x / 2;
    double diff;
    if (x == 0)
    {
        return 0;
    }
    do
    {
        s = (s * s + x) / (2 * s);
        diff = s * s - x;
    } while (diff < -epsilon || diff > epsilon);

    return s;
}
