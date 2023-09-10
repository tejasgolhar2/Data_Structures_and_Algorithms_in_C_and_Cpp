#include<iostream>

using namespace std;

int main()
{
    //array declaration
    int arr1[5];
    cout<<"Array 1 declared successfully"<<endl;
    // the array1 name is representing the base address of the first memory location

    //Accessing array elements
    int arr2[5] = {11,121,131,141,151};
    cout<<"Array 2 initialised successfully"<<endl;
    cout<<"\tElement present at index '0' of arr2 is "<< arr2[0] <<endl;

    //printing elements of array using for loop
    for(int i = 0; i<5 ; i++)
    {
        cout<<arr2[i]<<endl;
        if(i==4)
        {
            cout<<"Accessing arr2 elements successful"<<endl;
        }
    }

    return 0;
}