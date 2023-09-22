#include<iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    int start=0;
    int end=size-1;
    
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The array before reversal: "<<endl;
    printArray(arr,n);

    reverseArray(arr,n);

    cout<<"The array after reversal: "<<endl;
    printArray(arr,n);
    return 0;
}