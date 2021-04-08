#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

void testFunc(int* i)
{
    int a = 10;
    cout << a+(*i) << endl;
}

int main()
{
    int a = 10;     // this variable cannot be const
    const int* refA = &a;
    int* b = const_cast<int*>(refA);
    *b=15.5;
    
    cout << a << " " << *b << endl;
    
    const int x = 20;
    const int* refX = &x;
    testFunc(const_cast<int*>(refX)); // const_cast returns non-const
    
    return 0;
}
