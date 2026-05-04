#include "shop.h"

void Device::SetBrand(string b)
{
    brand = b;
}

void Device::SetPrice(double p)
{
    price = p;
}

void Device::SetYear(int y)
{
    year = y;
}

void Device::ShowInfo()
{
    cout << "Brand: " << brand << endl;
    cout << "Price: " << price << endl;
    cout << "Year : " << year << endl;
}

void Device::TurnOn()
{
    cout << "Device is turning on..." << endl;
}


// Laptop

void Laptop::SetRAM(int r)
{
    ram = r;
}

void Laptop::TurnOn()
{
    cout << "Laptop is turning on..." << endl;
}


// Phone

void Phone::SetSIM(int s)
{
    simCount = s;
}

void Phone::Call()
{
    cout << "Calling..." << endl;
}

void Phone::TurnOn()
{
    cout << "Phone is turning on..." << endl;
}


// CameraDevice

void CameraDevice::SetMP(int m)
{
    megapixels = m;
}

void CameraDevice::TurnOn()
{
    cout << "Camera device is turning on..." << endl;
}


// Smartphone

void Smartphone::SetCamera(int c)
{
    cameraMP = c;
}

void Smartphone::OpenApp()
{
    cout << "Application opened." << endl;
}

void Smartphone::TurnOn()
{
    cout << "Smartphone is turning on..." << endl;
}


// iPhone

void iPhone::SetFaceID(bool f)
{
    faceID = f;
}

void iPhone::UseSiri()
{
    cout << "Siri is listening..." << endl;
}

void iPhone::TurnOn()
{
    cout << "iPhone is turning on..." << endl;
}