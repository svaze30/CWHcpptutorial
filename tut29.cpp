//Constructors In C++ | C++ Tutorials for Beginners #29
#include<iostream>

using namespace std;

class Complex {
    int a, b;

    public:
        Complex(void);//constructor declaration

        void printNumber() {
            cout<<"Your number is " <<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(void) {
    a = 10;
    b = 0;
}
int main () {
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
/*
Constructors in C++

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++

    A constructor should be declared in the public section of the class
    They are automatically invoked whenever the object is created
    They cannot return values and do not have return types
    It can have default arguments
    We cannot refer to their address

*/