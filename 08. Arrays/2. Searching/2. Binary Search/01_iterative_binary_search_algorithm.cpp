#include <iostream>

using namespace std;

// The array elements should be in "monotonous order" -- either with increasing or decreasing order of element arrangement

void getArray(int array[], int size)
{
    cout << "\nEnter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int binarySearch(int array[], int size, int key)
{
    int start = 0, end = size - 1;

    int mid = (start + end) / 2;    //  Exception due to extended value of 'mid' beyond integer range

    while (start <= end)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size, key;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int array[size];

    getArray(array, size);

    cout << "Enter the value to be searched in the array: " << endl;
    cin >> key;

    int index = binarySearch(array, size, key);
    cout << "Position of the key value " << key << " in the array is " << index + 1 << endl;

    return 0;
}