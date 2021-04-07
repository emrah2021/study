#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Int {
    int x;
public:
    Int(int x=0):x{x}
    {
        std::cout << "conversion constructor" << endl;
    }
    
    operator string ()
    {
        std::cout << "conversion operator" << endl;
        return to_string(x);
    }
};

int main()
{
    Int obj(3);
    string str1 = obj;
    obj = 20; // if constructor has only one parameter you can use this assignment
    string str2 = static_cast<string>(obj);
    obj = static_cast<Int>(30);
    
    return 0;
}
