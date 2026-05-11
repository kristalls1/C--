#pragma once
#include <cmath>
#include <iostream>
#include <functional>
using namespace std;

class Math{
private:
 double a, b ,eps;
 function<double(double)>f;
 function<double(double)>df;
public:
  Math();
  

 void setinterval(double A, double B);
 void setEPS(double e);

 


 double newton();
 double dichotomy();
 ~Math (){}
};



