#ifndef operator_H
#define operator_H
#include <iostream>

class Complex {
    double re, im;
    public:
        Complex(void): re(0.0), im(0.0){}
        Complex (double pRe, double pIm): re(pRe), im(pIm){}
        double getRe() const {return re;};
        double getIm() const {return im;};
    
    //prefix single operator
        Complex operator-()const {
            Complex res(-re,-im);
            return res;
        }
        //postfix single operator
        // place parameter ex int denote postfix operator
        Complex operator++(int) const {
            Complex res(re+1,im);
            return res;
        }
        //binary operator
        // input order is important
        Complex operator+(const Complex &Y) const {
            Complex res(re+Y.re, im+Y.im);
            return res;
        }
        // operator= MUST be member operator
        Complex &operator=(const Complex &Y) {
            if(&Y != this){
                re=Y.re;
                im=Y.im;
            }return *this;
        }
};
        //operator like global function
        bool operator>(const Complex &X, const Complex &Y)  {
            return (X.getRe()>Y.getRe());
        }
        //if first element is basic type (built-in) or object
        //not modifiable like a library, the operator MUST be global function
        std::ostream &operator<<(std::ostream &os, const Complex Y){
            os<<Y.getRe()<<'+'<<Y.getIm()<<'i';
            return os;
        }

#endif