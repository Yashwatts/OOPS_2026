#include <iostream>
#include <string>
using namespace std;


class Teacher {
private:
    double salary;

public:
    // Properties / Attributes
    string name;
    string dept;
    string subject;

    // Non-parameterized Constructor
    Teacher() {  // Constructor
        cout << "Hi, I am constructor" << endl;

        dept = "Computer Science";
    }

    // Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;

        // Left is the object value and right is the parameter of constructor
    }

    // Copy Constructor
    Teacher(Teacher &orgObj) {  // Pass by reference
        cout << "I am custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // Methods / Member Functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Teacher t1;  // Constructor call
    Teacher t2;  // 2nd Constructor call

    t1.name = "Yash";
    t1.subject = "C++";
    // t1.dept = "Computer Science";

    cout << t1.dept << endl;

    Teacher t3("Yash", "Computer Science", "C++", 25000);
    t3.getInfo();

    Teacher t4(t3);  // Default copy constructor -invoke (if not made any copy constructor in class)
    t4.getInfo();

    return 0;
}