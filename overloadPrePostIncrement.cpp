#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Int
{
    int elem;
public:
    Int(){}
    Int(int i) : elem(i) {}
    void print() {std::cout << elem << std::endl;}
    Int & operator++()  // pre increment
    {
        elem++;
        std::cout << "elem: " << elem << std::endl;
        return *this;
    }
    Int operator++(int dummy)
    {
        Int temp;
        temp = *this;
        ++(*this);
        return temp;
    }
};

int main()
{
    Int ins(100);
    (ins++).print();
    ins.print();
    
    (++ins).print();
    ins.print();
    
    return 0;
}
