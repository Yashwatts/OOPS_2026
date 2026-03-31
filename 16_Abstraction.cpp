/*

Hiding all unnecessary complex implementation details and showing only the essential features to the user. (Using access modifiers/specifiers is one of the example of Abstraction).

• Abstract Class: A class that cannot be used to create objects. It exists only to be inherited by other classes.

• Pure Virtual Functions: A function defined in a base class with no implementation (virtual void draw() = 0; ). Any class containing at least one pure virtual function becomes an abstract class. 

*/


#include <iostream>
#include <string>
using namespace std;

class Shape {  // Abstract Class
    virtual void draw() = 0;  // Pure Virtual Function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

int main(){
    Circle c1;
    c1.draw();

    return 0;
}