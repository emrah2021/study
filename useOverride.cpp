#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Person
{
    public:
        virtual void printName() { cout << "Person" << endl;}
};
class Man : public Person
{
    public:
        void printName() override { cout << "Emrah" << endl;} // override keyword pushes to override
};
class Woman : public Person
{
    public:
        void printName() override { cout << "Gizem" << endl;}
};

int main()
{
    Man m;
    Person* p = &m;
    p->printName();
    
    Person* p2 = new Woman();
    p2->printName();
    
    return 0;
}
