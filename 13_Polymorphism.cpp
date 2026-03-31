/*

Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

• Compile-time Polymorphism:
    • Constructor Overloading

    • Function Overloading: Multiple functions with the same name but different parameters.

    • Operator Overloading: Giving special meaning to an operator (like + or <<) for user-defined types.

• Runtime Polymorphism:
    • Function Overriding: A child class providing a specific implementation of a function already defined in the parent class. (Inheritance)

    • Virtual Functions: Used to ensure the correct function is called for an object, regardless of the type of pointer used for the function call.
        • Virtual functions are Dynamic in nature.
        • Defined by the keyword "virtual" inside a base class and are always declared with a base class and overriden in a child class.

*/


#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student() {
        cout << "Non-Parameterized" << endl;
    }

    Student(string name){
        this->name = name;
        cout << "Parameterized" << endl;
    }
};

int main(){
    Student s1("Tony");

    return 0;
}