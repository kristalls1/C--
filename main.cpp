#include "shop.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "===== Laptop =====" << endl;
    Laptop myLaptop;
    myLaptop.SetBrand("Vivobook");
    myLaptop.SetPrice(34000);
    myLaptop.SetYear(2022);
    myLaptop.SetRAM(16);
    myLaptop.ShowInfo();
    cout << endl;


    cout << "===== Phone =====" << endl;
    Phone myPhone;
    myPhone.SetBrand("nokia");
    myPhone.SetPrice(1000);
    myPhone.SetYear(2000);
    myPhone.Call();
    myPhone.SetSIM(1);
    myPhone.ShowInfo();
    cout << endl;

     cout << "===== Smartphone =====" << endl;
    Smartphone mySmartphone;
    mySmartphone.SetBrand("Xiomi");
    mySmartphone.SetPrice(20000);
    mySmartphone.SetYear(108);
    mySmartphone.ShowInfo();
    mySmartphone.OpenApp();
    mySmartphone.SetCamera(2020);


    cout << "===== iPhone =====" << endl;
    iPhone myIPhone;
    myIPhone.SetBrand("Apple");
    myIPhone.SetPrice(40000);
    myIPhone.SetYear(2025);
    myIPhone.UseSiri();
    myIPhone.SetFaceID(true);
    myIPhone.ShowInfo();
    myIPhone.OpenApp();


    cout << "=== ending ===" << endl;
    Device* d1 = new Laptop;
    d1->TurnOn();

    Device* d2 = new Phone;
    d2->TurnOn();

    Device* d3 = new Smartphone;
    d3->TurnOn();

    Device* d4 = new iPhone;
    d4->TurnOn();

    delete d1;
    delete d2;
    delete d3;
    delete d4;

    return 0;
}