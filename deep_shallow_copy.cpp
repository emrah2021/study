#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

class Base
{
    int elem;
    int* ptr;
public:
    Base():elem{0}, ptr{new int(0)}{}
    /*Base(Base & obj)  // shallow copy
    {
        ptr = new int(*(obj.ptr));
        elem = obj.elem;
    }*/
    Base(Base & obj)  // deep copy
    {
        ptr = new int(*(obj.ptr)); // get new address for copy object
        elem = obj.elem;
    }
    void setElem(int _elem) 
    {
        elem = _elem;
    }
    void setPtr(int _ptr) 
    {
        *ptr = _ptr;
    }
    int getElem()
    {
        return elem;
    }
    int* getPtr()
    {
        return ptr;
    }
};

int main()
{
    Base b1;
    b1.setElem(10);
    b1.setPtr(15);
    Base b2 = b1;
    b2.setElem(30);
    b2.setPtr(45);
    
    std::cout << "b1.getElem: " << b1.getElem() << std::endl;
    std::cout << "b1.getPtr: " << *(b1.getPtr()) << std::endl;
    std::cout << "b2.getElem: " << b2.getElem() << std::endl;
    std::cout << "b2.getPtr: " << *(b2.getPtr()) << std::endl;
    
    return 0;
}
