#include "dichotomy_class.h"
#include <cmath>
#include <iostream>
#include <functional>
using namespace std;

void Math::setinterval(double A, double B){
    a = A;
    b = B;
}

void Math::setEPS(double E){
    eps = E;
}

double Math::dichotomy(function<double(double)>f){
    double first = f(a)*f(b);
    if(first > 0) {
        return NAN;
    }
    while(fabs(b-a) >= eps){
    double c = (a+b)/2;
    double second = f(a)*f(c);
    if (fabs(f(c)) < eps)
    return c;
    if(second < 0) b = c;
    else a = c;
    }
    double x = (a+b)/2;
    return x;
}

double Math::newton(function<double(double)>f, function<double(double)>df){
    double x = (a + b)/2;
    while(fabs(f(x)) >= eps){
    if(fabs(df(x)) == 0) return NAN;
    x = x - (f(x)/df(x));
    }
    return x;
}