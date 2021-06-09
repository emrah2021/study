#include <iostream>
#include <vector>
#include <typeinfo>
#include <initializer_list>

using namespace std;

class Base
{
    public: 
        Base()
        {
            cout << "default ctor" << endl;
        }
        Base(int i, bool b)
        {
            cout << "int, bool" << endl;
        }
        Base(int i, double d)
        {
            cout << "int, double" << endl;
        }
        Base(initializer_list<double> il)
        {
            cout << "initializer_list" << endl;
        }
};

int main()
{
    //vector<int> v = {1,3,5,7,9,11};
    
    int i1(5);
    cout << "i1=" << i1 << endl;
    int i2{6};  // default init
    cout << "i2=" << i2 << endl;
    int i3{};   // zero init
    cout << "i3=" << i3 << endl;
    
    double a = 1.2;
    double b = 1.4;
    
    int i4(a+b);
    cout << "i4=" << i4 << endl;
    int i5{a+b};    //  narrowing conversion warning
    cout << "i5=" << i5 << endl;
    
    Base b11;
    Base b12(); // most vexing parse
    Base b13{}; // run default ctor
    Base b14({});   // run initializer_list
    Base b1(3, true);
    Base b2(3, 2.0);
    Base b3{3, false};  // run initializer_list, if list is not string, maybe narrowing warning
    Base b4{3, 4.0};    // run initializer_list, if list is not string
    
    vector<int> v1(5,2);    // 5 elements all 2
    cout << "v1 size: " << v1.size() << " element: " << v1[4] << endl;
    vector<int> v2{5,2};    // 2 elements
    cout << "v2 size: " << v2.size() << " element: " << v2[0] << endl;
    
    //cout << c << endl;

    return 0;
}
