#include <iostream>

using namespace std;

void getArray(int array[], int size)
{
    cout << "\nEnter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int binarySearch(int array[], int l, int h, int target)
{
    // base case
    if (l > h)
    {
        return -1;
    }

    int mid = l + (h - l) / 2;

    if (array[mid] == target)
    {
        return mid;
    }
    else if (array[mid] > target)
    {
        return binarySearch(array, mid + 1, h, target);
    }

    return binarySearch(array, l, mid - 1, target);
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

    int index = binarySearch(array, 0, size - 1, key);
    cout << "Position of the key value " << key << " in the array is " << index + 1 << endl;

    return 0;
}