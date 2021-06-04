#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

template<typename T>
void getTypeName(const T& param)
{
    cout << "type of T: " << typeid(T).name() << endl;
    cout << "type of param: " << typeid(param).name() << endl;
}

int main()
{
    vector<int> v = {1,3,5,7,9,11};
    
    const auto vw = v;
    
    getTypeName(&vw[0]);

    return 0;
}
