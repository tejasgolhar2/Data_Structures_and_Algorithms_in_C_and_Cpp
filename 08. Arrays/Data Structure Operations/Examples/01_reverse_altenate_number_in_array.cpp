#include<iostream>

using namespace std;

void reverseAlternateElementArray1(int arr[], int size)
{
    int start=0;
    int end=1;
    
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
        if (start>=(size-1))
        {
            break;
        }
    }
}

void reverseAlternateElementArray2(int arr[], int size)
{
   int i = 0;
    while((i+1)<size)
    {
        swap(arr[i],arr[i+1]);
        i+=2;
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

    cout<<"The array before alternate reversal: "<<endl;
    printArray(arr,n);

    reverseAlternateElementArray2(arr,n);

    cout<<"The array after alternate reversal: "<<endl;
    printArray(arr,n);
    return 0;
}