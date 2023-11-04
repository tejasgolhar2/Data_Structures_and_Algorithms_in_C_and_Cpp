#include<stdio.h>
#include<conio.h>

int main()
{
	int n,arr[5];

	printf("Enter the size of the array:\n");
	scanf("%d",&n);

	printf("Enter the array elements:\n");
	for( int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nArray before bubble sort:\n");
	for( int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	for(int i=0; i<(n-1); i++)   // Number of passes
	{
		bool flag = 0;

		for(int j=0; j<(n-1-i); j++) // One element is bubbeld at the last of the array
		{
			if (arr[j]>arr[j+1])
			{
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag = 1;
			}

		}

		if (flag == 0)  // No swapping -- Array sorted so break the loop
		{
			break;
		}
	}

	printf("\nArray after bubble sort:\n");
	for( int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

// Time Complexity : 
//  	Best case : O(n)
// 		Worst Case: O(n^2)