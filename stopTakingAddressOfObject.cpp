#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Base
{
    int x;
public:
    Base(int x):  x{x} {}
    Base* operator & () = delete; // using delete, this function not exist
private:
    Base* operator & () {return this;}
};

int main()
{
    Base b(1);
    cout << &b << endl;
    
    return 0;
}
