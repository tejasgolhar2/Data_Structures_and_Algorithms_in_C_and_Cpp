#include<iostream>

using namespace std;

void printArray(int arr1[],int size)
{
    cout<<"Printing arr1 using function"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr1[i] <<" ";
    }

    
}

int main()
{
    int arr1[10]={1,2,3,4,5,+9,7,88,95,4};
    printArray(arr1,10);
    return 0;
}