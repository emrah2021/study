#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

//#pragma pack(1) // normally padding occurs, with using this pragma padding is disabled

struct myStruct
{
    char a;
    char b;
    int i;  // 4un katları olan memory dilimine konur
};

int main()
{
    myStruct m;
    
    cout << sizeof(m) << endl;
    
    return 0;
}
