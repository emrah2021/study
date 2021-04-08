#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;
const int N = 3;

void printArray(int arr[][N])
{
    for(int i=0; i<N;i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;  
    }
}

int (*(getArray)())[N]
{
    static int arr[N][N] = {{0,1,2},{0,1,2},{0,1,2}};
    return arr;
}

int main()
{
    int (*arr)[N];
    arr = getArray(); // get address of the array stored in heap
    printArray(arr);
    
    return 0;
}
