/*

Allows a class (Child/Derived) to acquire properties and behaviors from another class (Parent/Base).

• Modes of Inheritance: Defines how the accessibility of base class members changes in the derived class (Public, Private, or Protected).

• Types of Inheritance:
    • Single: One parent, one child.

    • Multi-level: A chain of inheritance (Grandparent -> Parent -> Child).

    • Multiple: One child inheriting from multiple parents (e.g., a "TA" class inheriting from both "Student" and "Teacher").

    • Hierarchical: One parent, multiple children.

    • Hybrid: A combination of multiple types of inheritance.

*/

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    Person() {
        cout << "Parent Constructor" << endl;
    }

    ~Person(){
        cout << "Parent Destructor" << endl;
    }
};

class Student : public Person{
    // name, age, rollno
public:
    int rollno;

    // Order of constructor on calling child object: Parent -> Child
    Student() {
        cout << "Child Constructor" << endl;
    }

    // Order of destructor on calling child object: Child -> Parent
    ~Student() {
        cout << "Child Destructor" << endl;
    }

    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Rollno: " << rollno << endl;
    }
};

int main(){
    Student s1("Yash", 21, 1234);
    // s1.name = "Yash";
    // s1.age = 21;
    // s1.rollno = 1234;

    s1.getInfo();
    
    return 0;
}