#include <stdio.h>
#include <iostream>
#include <tuple>

using namespace std;

std::tuple<int,char,std::string> fun(bool b)
{
    if(b)
        return std::make_tuple(1, 'x', "Emrah");
    else
        return std::make_tuple(2, 'y', "Gizem");
}

int main()
{
    int num;
    char code;
    std::string name;
    tie(num, code, name) = fun(true);
    std::cout << num << " " << code << " " << name << std::endl;
 
    auto ins = fun(true);
    num = std::get<0>(ins);
    code = std::get<1>(ins);
    name = std::get<2>(ins);
    std::cout << num << " " << code << " " << name << std::endl;
 
    return 0;
}
