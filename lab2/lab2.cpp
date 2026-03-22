#include "lab2.h"
#include <cmath>
#include <iostream>
using namespace std;


double distance(const Points &p1, const Points &p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double heronArea(const triangle &t){
    double a = distance(t.A, t.B);
    double b = distance(t.B, t.C);
    double c = distance(t.A, t.C);

    double s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int triangle::contains1(const Points &P) const {
    double d1 = cross(A, B, P);
    double d2 = cross(B, C, P);
    double d3 = cross(C, A, P);

    if (fabs(d1) < 1e-9 || fabs(d2) < 1e-9 || fabs(d3) < 1e-9)
        return 0;

    triangle T1 = {A, B, P};
    triangle T2 = {B, C, P};
    triangle T3 = {C, A, P};

    double S_main = area();
    double S_sum = T1.area() + T2.area() + T3.area();

    if (fabs(S_main - S_sum) < EPS)
        return 1;

    return -1;
}

int triangle::contains2(const Points &P) const {
    double d1 = cross(A, B, P);
    double d2 = cross(B, C, P);
    double d3 = cross(C, A, P);

    if (fabs(d1) < 1e-9 || fabs(d2) < 1e-9 || fabs(d3) < 1e-9)
        return 0;

    if ((d1 > 0 && d2 > 0 && d3 > 0) ||
        (d1 < 0 && d2 < 0 && d3 < 0))
        return 1;

    return -1;
}

double triangle::area() const{
    return heronArea(*this);
}

double cross(const Points &A, const Points &B, const Points &P){
    return (B.x - A.x) * (P.y - A.y) - (B.y - A.y) * (P.x - A.x);
}