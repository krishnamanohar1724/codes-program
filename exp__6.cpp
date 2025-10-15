#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student() {
        rollNo = 0;
        name = "Unknown";
    }

    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;                  
    Student s2(101, "Ravi");      

    s1.display();
    s2.display();
    return 0;
}

