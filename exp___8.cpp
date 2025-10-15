#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.eat();
    dog1.bark();

    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.eat();
    cat1.meow();
    return 0;
}
