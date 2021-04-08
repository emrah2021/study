#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int* getArray()
{
    //static int arr[3] = {0,1,2}; // stored in heap
    int* arr = new int[3];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    return arr;
}

int main()
{
    int* myArray;
    myArray=getArray();
    //delete myArray;     // delete from heap
    cout << myArray[0] << " " << myArray[1] << " " << myArray[2] << endl;
    
    return 0;
}
