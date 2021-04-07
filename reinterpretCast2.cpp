#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

struct myStruct
{
    int x;
    int y;
    char c;
    bool b;
};

int main()
{
    myStruct s;
    s.x = 5;
    s.y = 10;
    s.c = 'a';
    s.b = true;
    int *p = reinterpret_cast<int*>(&s); // shows address of first int
    cout << *p << endl;
    p++;
    cout << *p << endl; // shows address of second int
    p++;
    char *c = reinterpret_cast<char*>(p);   // shows address of char in struct
    cout << *c << endl; 
    c++;                // increments one byte 
    bool *b = reinterpret_cast<bool*>(c);   // shows address of bool in struct
    cout << *b << endl; 
    return 0;
}
