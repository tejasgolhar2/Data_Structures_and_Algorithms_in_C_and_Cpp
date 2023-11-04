#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;

	int arr[n];
	cout<<"Enter the array elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int i=1;i<n;i++)
	{
		int temp = arr[i];
		
		int j = i-1;

		while((j>=0) && arr[j]>temp )
		{
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=temp;
	}

	cout<<"Array after insertion sort: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}