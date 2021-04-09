#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int add(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int func1 (int (*someFunc)(int,int))
{
    return (*someFunc)(1,2);
}

typedef int(*mathFunc)(int,int);

int main()
{
    int (*func)(int,int) = add;
    int a = (*func)(2,3);
    cout << a << endl;
    int c = func1(add);
    cout << c << endl;
    
    mathFunc Arr[2] = {add,sub};
    int mf1 = (*Arr[0])(1,2);
    int mf2 = (*Arr[1])(1,2);
    cout << mf1 << " " << mf2 << endl;
    
    return 0;
}
