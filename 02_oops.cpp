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

    // Methods / Member Functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter: A public function that sets or updates the value of a private variable, often including validation logic.
    void setSalary(double s) {
        salary = s;
    }

    // Getter: A public function that returns the value of a private variable.
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Yash";
    t1.subject = "C++";
    t1.dept = "Computer Science";

    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}


/*

Access Modifiers
These define the visibility and accessibility of class members:

• Private: Accessible only within the same class (Default in C++).

• Public: Accessible from anywhere in the program.

• Protected: Accessible within the class and its derived (child) classes.

*/