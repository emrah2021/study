#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;
const int N = 3;

void printArray(int** arr)
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

int** getArray()
{
    int** arr = new int*[N]; // this array is stored in heap
    for(int i=0; i<N;i++)
    {
        arr[i] = new int[N];
        for(int j=0; j<N; j++)
            arr[i][j] = i+j;
    }
    
    return arr;
}

int main()
{
    int** twoDimArr;
    twoDimArr = getArray(); // get address of the array stored in heap
    printArray(twoDimArr);
    
    return 0;
}
