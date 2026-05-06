#include "dichotomy_class.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    auto f =[](double x){
        return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
    };

    auto df =[](double x){
         return (3 * cos(sqrt(x))) / (2 * sqrt(x)) + 0.35;
    };

    double a, b, eps;
    cout << "Enter your value:" << endl;
    cout << "a:";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "eps: ";
    cin >> eps;
    
    Math obj;
    obj.setinterval(a, b);
    obj.setEPS(eps);

    double x1 = obj.dichotomy(f);
    double x2 = obj.newton(f, df);

    cout << "Dichotomy: " << x1 << endl;
    cout << "Newton: " << x2 << endl;
    return 0;
}