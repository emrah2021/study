#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int* p1 = new int(100);
    int* p2 = p1;
    std::cout << "p2: " << *p2 << endl;
    delete p2;
    // p1 is dangling pointer
    std::cout << "p1: " << *p1 << endl;
    
    return 0;
}
