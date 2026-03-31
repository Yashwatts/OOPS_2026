#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    void getInfo() {
        cout << "Parent Class" << endl;
    }

    virtual void hello() {
        cout << "Hello from Parent" << endl;
    }
};
// Function Overriding
class Child : public Parent {
public:
    void getInfo() {
        cout << "Child Class" << endl;
    }

    void hello() {
        cout << "Hello from Child" << endl;
    }
};

int main(){
    Child c1;
    c1.getInfo();
    c1.hello();  // Virtual Functions

    return 0;
}