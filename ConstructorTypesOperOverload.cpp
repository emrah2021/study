#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(): x{0},y{0}{}    // default constructor
    Point(int x,int y): x{x}, y{y} {}   // parameterised constructor
    Point(const Point &p) { x=p.x; y=p.y;}  // copy constructor
    Point operator+(const Point &p) 
    {
        Point newP;
        newP.x = p.x + x;
        newP.y = p.y + y;
        return newP;
    }
    void print()
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    Point p1(2,4);
    Point p2(6,8);
    
    Point sumP = p1 + p2;
    sumP.print();
    
    return 0;
}
