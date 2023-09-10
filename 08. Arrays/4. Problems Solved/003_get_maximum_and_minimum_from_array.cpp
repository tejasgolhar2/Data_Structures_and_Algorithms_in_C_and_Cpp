#include <iostream>
using namespace std;

int checkMax(int array[], int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int checkMin(int array[],int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{
    int array[8] = {11, 45, 89, 21, 4, 23, 2, 12};
    // rest unmentioned elements of the array will be zero

    int maximum = checkMax(array, 8);
    cout<<"\nThe maximum number present in the array is "<< maximum << endl;

    int minimum = checkMin(array, 8);
    cout<<"The minimum number present in the array is "<< minimum << endl;

    return 0;
}