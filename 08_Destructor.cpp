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

    // Destructor
    ~Student() {
        cout << "Hi, I delete everything" << endl;
        delete cgpaPtr;  // Memory Leak if not mentioned
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Yash Watts", 8.9);
    s1.getInfo();

    return 0;
}