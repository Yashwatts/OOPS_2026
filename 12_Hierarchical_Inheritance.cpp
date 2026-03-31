#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};


int main(){
    Teacher t1;
    Student s1;
    s1.name = "Yash";
    s1.age = 21;
    s1.rollno = 1234;

    t1.name = "Tony Stark";
    t1.age = 64;
    t1.subject = "Engineering";

    cout << s1.name << endl;
    cout << s1.rollno << endl;

    cout << t1.name << endl;
    cout << t1.subject << endl;
    
    return 0;
}