#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Base
{
    int x;
    public:
        Base(int x):x{x} {};
        friend void testBase(Base& b);  // friend function is mainly used for test purpose
};

void testBase(Base& b)
{
    cout << b.x << endl;
    b.x = 20;
    cout << b.x << endl;
}

int main()
{
    Base b(10);
    testBase(b);
    
    return 0;
}
