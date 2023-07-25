#include<iostream>

using namespace std;

void linearSearch(int arr[], int size, int key )
{
    bool flag = 0;
    for ( int i = 0; i<size; i++)
    {
        if (arr[i]==key)
        {
            cout<<"The key search is successful and it is found at location "<<i+1<<endl;
            flag = 1;
        }
    }
        if(flag==0) 
        {
            cout<<"The key search was unsuccessfull"<<endl;
        }
}

int main()
{
    int n,num;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key value to be searched in the array: "<<endl;
    cin>>num;
    linearSearch(arr,n,num);
    
    return 0;
}