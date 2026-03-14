#include <iostream>
#include "lab2.h"
#include <cmath>
using namespace std;

int main(){ 
    triangle t;
    int n;

    cout << "Enter the point A: " << endl;
    cin >> t.A.x >> t.A.y;

    cout << "Enter the point B: " << endl;
    cin >> t.B.x >> t.B.y;

    cout << "Enter the point C: " << endl;
    cin >> t.C.x >> t.C.y;

    cout << "Enter the number of points: " << endl;
    cin >> n;

    if(fabs(t.area()) < 1e-9 && fabs(cross(t.A, t.B, t.C)) < 1e-9){
        cout << "Triangle is degenerate (points are on one line)" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++){
        Points p;
        cout << "Enter point " << i + 1 << ": " << endl;
        cin >> p.x >> p.y;

        int r = t.contains2(p);

        switch (r)
        {
        case 1: cout << "Point inside triangle" << endl; break;
        case 0: cout << "Point on border" << endl; break;
        case -1: cout << "Point outside triangle" << endl; break;
        }
    }

    return 0;
}