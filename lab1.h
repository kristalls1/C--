#pragma once

struct price{
    int hrv;
    short kop;
}; 
 void readfile(const char* filename);
 void sum(price a, price b);
 void res(price p, int kil);
 void round_price(price p);

