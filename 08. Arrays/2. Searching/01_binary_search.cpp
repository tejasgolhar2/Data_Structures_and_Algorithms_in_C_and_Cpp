#include<iostream>

using namespace std;

void getArray(int array[],int size)
{
    cout<<"\nEnter the array elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
}

int binarySearch(int array[],int size, int key)
{
    int start = 0,end = size-1;

    // Point for exception arrival due to extended value of Mid beyond integer range
    // Refer Exception Handling File for binary search
    
    int mid = (start+end)/2;

    while(start<=end)
    {
        if(array[mid]==key)
        {
            return mid;
        }
        if(key<array[mid])
        {
            end = mid - 1;
        }
        else if(key>array[mid])
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int size,key;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int array[size];

    getArray(array,size);

    cout<<"Enter the value to be searched in the array: "<<endl;
    cin>>key;

    int index = binarySearch(array,size,key);
    cout<<"Index of the key value "<<key<<" in the array is "<<index<<endl;

    return 0;
}