#include <iostream>
using namespace std;

class Value {
    int val;
public:
    Value(int v): val(v) {}
    friend void operator-(Value &v);
    void show() { cout << "Value: " << val << endl; }
};

void operator-(Value &v) {
    v.val = -v.val;
}

int main() {
    Value v(5);
    -v; 
    v.show();
    return 0;
}

