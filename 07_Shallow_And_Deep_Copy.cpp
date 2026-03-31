#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj) {  // Copy Constructor
        // Shallow Copy
        // this->name = obj.name;
        // this->cgpaPtr = obj.cgpaPtr;

        // Deep Copy
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {

    Student s1("Yash Watts", 8.9);
    Student s2(s1);  // "Neha Kumar"

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();  // s1 value also go updated
    
    s2.name = "Neha";
    s2.getInfo();

    return 0;
}
