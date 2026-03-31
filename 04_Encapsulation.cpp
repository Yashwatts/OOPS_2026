/*

Encapsulation is the process of wrapping data and member functions into a single unit (the class).
It leads to Data Hiding by making sensitive data private and providing access only through Getters and Setters.

• Getter: A public function that returns the value of a private variable.

• Setter: A public function that sets or updates the value of a private variable, often including validation logic.

*/


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

class Account {
private:
    double balance;
    string password; // Data Hiding

public:
    string accountId;
    string username;

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