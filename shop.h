#pragma once
#include <iostream>
#include <string>
using namespace std;

class Device
{
private:
    string brand;
    double price;
    int year;

public:
    void SetBrand(string b);
    void SetPrice(double p);
    void SetYear(int y);

    void ShowInfo();
    virtual void TurnOn();
};

class Laptop : public Device
{
private:
    int ram;

public:
    void SetRAM(int r);
    void TurnOn() override;
};

class Phone : public Device
{
private:
    int simCount;

public:
    void SetSIM(int s);
    void TurnOn() override;
    void Call();
};

class Smartphone : public Phone
{
private:
    int cameraMP;

public:
    void SetCamera(int c);
    void TurnOn() override;
    void OpenApp();
};

class iPhone : public Smartphone
{
private:
    bool faceID;

public:
    void SetFaceID(bool f);
    void UseSiri();
    void TurnOn() override;
};