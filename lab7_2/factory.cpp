//static fabric
#include <iostream>
using namespace std;

class Transport{
private:
string name;
public:
Transport(string name){
    this->name = name;
}
Transport(){}
void setName(string name){
    this->name = name;
}
string getName(){
    return name;
}
};

class Car : public Transport{
public:
    Car(string name) : Transport(name){}
    Car() : Transport(){}
};

class Bike : public Transport{
public:
    Bike(string name) : Transport(name){}
    Bike() : Transport(){}

};

class ElectricCar : public Car{
public:
    ElectricCar() : Car("Electric Car"){}
};

class SportCar : public Car{
public:
    SportCar() : Car("Sport Car"){}
};

class ElectricBike : public Bike{
public:
    ElectricBike() : Bike("Electric Bike"){}
};

class SportBike : public Bike{
public:
    SportBike() : Bike("Sport Bike"){}
};

class Fabric{
public:
virtual Car* getCar() = 0;
virtual Bike* getBike() = 0;
};

class Electric_Fabric : public Fabric{
public:
Car* getCar(){
    return new ElectricCar;
}
Bike* getBike(){
    return new ElectricBike;
}

};

class Sport_Fabric : public Fabric{
public:
Car* getCar(){
    return new SportCar;
}
Bike* getBike(){
    return new SportBike;
}
};

int main(){
    Fabric* fabric = new Sport_Fabric();
    Car* car = fabric->getCar();
    Bike* bike = fabric->getBike();

    cout << car->getName() << endl;
    cout << bike->getName()<< endl;

    return 0;
}
