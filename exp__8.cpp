#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape {
public:
    void sides() {
        cout << "A polygon has multiple sides." << endl;
    }
};

class Triangle : public Polygon {
public:
    void type() {
        cout << "A triangle comes under a three-sided polygon." << endl;
    }
};

int main() {
    Triangle myTriangle;
    myTriangle.display(); 
    myTriangle.sides();   
    myTriangle.type();    
    return 0;
}
