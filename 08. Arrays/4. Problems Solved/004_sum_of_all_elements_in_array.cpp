#include<iostream>

using namespace std;

int checkSum(int array[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum+=array[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int array[n];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i<n;i++)
    {
        cin>>array[i];
    }

    int sum = checkSum(array,n);
    cout<<"The sum of all the elements in the array is : "<<sum<<"."<<endl;
    return 0;
}