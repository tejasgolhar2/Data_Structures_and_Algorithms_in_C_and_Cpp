#include<iostream>
using namespace std;

void checkUnique(int arr[],int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
}

void sortArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=arr[i])
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        i++;
    }
}

int main()
{
    int num;
    cout<<"Enter array size: "<<endl;
    cin>>num;
    int arr[num];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    sortArray(arr,num);
    checkUnique(arr,num);
    return 0;
}