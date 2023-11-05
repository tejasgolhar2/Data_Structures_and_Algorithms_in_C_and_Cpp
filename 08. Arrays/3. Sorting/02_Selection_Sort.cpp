#include<iostream>

using namespace std;

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

	cout<<"Array before sorting : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	// SOrting algorithm
	for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++ )
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}

		swap(arr[i],arr[min]);
	}

	cout<<"\nArray after sorting : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}