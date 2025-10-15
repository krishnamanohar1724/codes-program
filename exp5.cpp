#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double x) {
        cout << "Double: " << x << endl;
    }

    void show(string x) {
        cout << "String: " << x << endl;
    }
};

int main() {
    Print p;
    p.show(5);            
    p.show(5.5);          
    p.show("Hello");      
    return 0;
}

