//Parameterized and Default Constructors In C++ | C++ Tutorials for Beginners #30

#include<iostream>

using namespace std;

class Complex {
    int a, b;

    public:
        Complex(int, int);

        void printNumber() {
            cout<<"Your number is " <<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex (int x, int y) { //Parameterized constructor
    a = x;
    b = y;
}

int main () {
    Complex a(4, 6);
    a.printNumber();
    return 0;
}

/*
Parameterized and Default Constructors in C++

Parameterized constructors are those constructors that take one 
or more parameters. Default constructors are those constructors 
that take no parameters. The main things to note here are that 
constructors are written in the public section of
 the class and the constructors don’t have a return type
*/