#include<iostream>

using namespace std;

void printArray(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i] <<endl;
    }
}

int main()
{
    int array[]={11,12,15};
    //use of sizeof() operator
    int array_size = sizeof(array)/sizeof(int);

    cout<<"The size of the array is "<< array_size <<" locations"<<endl;
    printArray(array,array_size);
    return 0;
}