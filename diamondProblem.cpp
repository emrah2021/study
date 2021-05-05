#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class A
{
    public: 
        int _a;
};
class B : virtual public A 
{
    public: 
        int _b;
};
class C : virtual public A 
{
    public: 
        int _c;
};
class D : public B, public C 
{
    public: 
        int _d;
};

int main()
{
    D d1;
    d1._a = 10;
    
    return 0;
}
