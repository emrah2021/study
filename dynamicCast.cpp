#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Base
{
    virtual void print() { cout<<"Base"<<endl; }
};
class Derived1 : public Base 
{
    void print() { cout<<"Derived1"<<endl; }
};
class Derived2 : public Base 
{
    void print() { cout<<"Derived2"<<endl; }
};

int main()
{
    Derived1 d1;
    Base* b = dynamic_cast<Base*>(&d1); // it is legal upcast (because base class has virtual func, polimorphism occurs)
    Derived2* d2 = dynamic_cast<Derived2*>(b); // not legal downcast, return pointer is null
    
    if(d2 == NULL)
        cout << "NULL\n";
    
    return 0;
}
