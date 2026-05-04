#include "shop.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
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
    myPhone.SetBrand("Nokia");
    myPhone.SetPrice(1000);
    myPhone.SetYear(2000);
    myPhone.SetSIM(1);
    myPhone.Call();
    myPhone.ShowInfo();
    cout << endl;


    cout << "===== CameraDevice =====" << endl;
    CameraDevice cam;
    cam.SetBrand("Canon");
    cam.SetPrice(15000);
    cam.SetYear(2023);
    cam.SetMP(64);
    cam.ShowInfo();
    cout << endl;


    cout << "===== Smartphone =====" << endl;
    Smartphone mySmartphone;
    mySmartphone.SetBrand("Xiaomi");
    mySmartphone.SetPrice(20000);
    mySmartphone.SetYear(2024);
    mySmartphone.SetSIM(2);
    mySmartphone.SetMP(108);
    mySmartphone.SetCamera(108);
    mySmartphone.ShowInfo();
    mySmartphone.OpenApp();
    cout << endl;


    cout << "===== iPhone =====" << endl;
    iPhone myIPhone;
    myIPhone.SetBrand("Apple");
    myIPhone.SetPrice(40000);
    myIPhone.SetYear(2025);
    myIPhone.SetFaceID(true);
    myIPhone.UseSiri();
    myIPhone.ShowInfo();
    myIPhone.OpenApp();
    cout << endl;


    cout << "===== Polymorphism =====" << endl;

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