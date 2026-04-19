#include "dichotomy_class.h"
#include <iostream>
using namespace std;

int main(){
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

    double x1 = obj.dichotomy();
    double x2 = obj.newton();

    cout << "Dichotomy: " << x1 << endl;
    cout << "Newton: " << x2 << endl;
    return 0;
}