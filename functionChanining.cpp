#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Base
{
    int _a;
    int _b;
public:
    Base& setA(int a) // Base& yerine Base dönerse kopyası yaratılır
    {   _a=a; 
        return *this;
    }
    Base& setB(int b) 
    {   _b=b;
        return *this;
    }
    void print() {std::cout << "a: " << _a << " b: " << _b << endl;}
};

int main()
{
    Base b1;
    // function chaining; with the help of this feature functions can de called in a strict order
    b1.setA(5).setB(15).print(); 
    
    return 0;
}
