#include <iostream>
using namespace std;

class Vehicle {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine(); 
    myCar.drive();       
    return 0;
}
