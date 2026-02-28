#include "lab1.h"
#include <fstream>
#include <iostream>
using namespace std;

void sum(price a, price b, price &c){
    c.hrv = a.hrv + b.hrv;
    c.kop = a.kop + b.kop;

    if(c.kop >= 100){
        c.hrv += c.kop / 100;
        c.kop = c.kop % 100;
    }
}
void res(price p, int kil, price &result){
    result.hrv = p.hrv * kil;
    result.kop = p.kop * kil;

    if(result.kop >= 100){
        result.hrv += result.kop / 100;
        result.kop = result.kop % 100;
    }
}

void round_price(price p, price &r){
    int money = p.hrv * 100 + p.kop;
    int last = money % 10;

    if(last <= 4) money -= last;
    else money += (10 - last);

    r.hrv = money / 100;
    r.kop = money % 100;
}

void readfile(const char* filename){
    int h, kil;
    short k;

    ifstream file(filename);
    if(!file.is_open()){
        cout << "Error!!!" << endl;
        return;
    }

    price total = {0, 0};

    while(file >> h >> k >> kil){
        price p = {h, k};      
        price line = {0, 0};  
        price temp = {0, 0};   

        res(p, kil, line);

        sum(total, line, temp);
        total = temp;
    }

    file.close();

    cout << "Total without rounding: "
         << total.hrv << " hrv " << total.kop << " kop" << endl;

    price rounded = {0, 0};
    round_price(total, rounded);

    cout << "Total with rounding: "
         << rounded.hrv << " hrv " << rounded.kop << " kop" << endl;
}