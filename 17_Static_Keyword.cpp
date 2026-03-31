/*

Static Variables: Variables that are shared by all objects of a class.
They are initialized only once and persist for the lifetime of the program.
// In Function

• Static Objects: Objects that stay in memory until the entire program finishes, even if they were created inside a function or loop.
// In Class

*/


#include <iostream>
#include<string>
using namespace std;

void fun() {
    int x = 0;
    cout << "x: " << x << endl;
    x++;
}

void fun2() {
    static int x = 0; // Now x initialized only 1 time
    cout << "x: " << x << endl;
    x++;
}

class A {
public:
    int x;

    void incX() {
        x = x + 1;
    }
};

class ABC {
public:
    ABC() {
        cout << "Constructor" << endl;
    }

    ~ABC() {
        cout << "Destructor" << endl;
    }
};

int main(){
    fun();
    fun();
    fun();
    // Always gives output 0

    fun2();
    fun2();
    fun2();
    // Output will be 0,1,2

    A obj1;
    A obj2;

    obj1.x = 100;
    obj2.x = 200;
    cout << obj1.x << endl;
    cout << obj2.x << endl;


    if(true){
        static ABC obj; // Object created with static keyword will continue till lifetime of program until the main function ends.
    }
    cout << "End of main function" << endl;

    return 0;
}