#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Mango
{
    public:
    void eatMango() { cout<<"eat mango"<<endl; }
};
class Banana 
{
    public:
    void eatBanana() { cout<<"eat banana"<<endl; }
};

int main()
{
    Banana* b = new Banana();
    Mango* m = new Mango(); 
    b = reinterpret_cast<Banana*>(m); // reinterpret_cast performs dangerous conversions bcs it can typecast a pointer to another
    b->eatBanana();
    
    return 0;
}
