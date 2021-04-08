#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

union myUnion
{
    char myCharArr[4];
    unsigned int myInt;
};

int main()
{
    myUnion m;
    m.myInt = 0x05040302;
    
    cout << (int)m.myCharArr[0] << endl;
    cout << (int)m.myCharArr[1] << endl;
    cout << (int)m.myCharArr[2] << endl;
    cout << (int)m.myCharArr[3] << endl;
    
    return 0;
}
