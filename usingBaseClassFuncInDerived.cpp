#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Base
{
public:
    void print(int i) {cout << "Base : " << i << endl;}
};

class Derived : public Base
{
public:
    using Base::print;  // in case we can use print function in Base
    void print(char c) {cout << "Derived : " << c << endl;}
};

int main()
{
    Derived d;
    d.print(1);
    d.print('c');
    d.Base::print(20);
    Base* b = static_cast<Base*>(&d);
    b->print(30);
    Derived *d1 = static_cast<Derived*>(b); // we can do downcast with using pointer, dynamic_cast is better
    d1->print('a');
    
    return 0;
}
