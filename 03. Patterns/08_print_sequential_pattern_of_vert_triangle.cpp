#include <iostream>

using namespace std;

int main()
{
    /*
        PRINT THE FOLLOWING PATTERN

                1
                2  3
                4  5  6
                7  8  9  10
                11 12 13 14 15
    */

    int num;
    cout << "\nEnter the number of rows to be present in the triangle:" << endl;
    cin >> num;

    int i = 0;
    int count = 1;
    while (i < num)
    {
        int j = 0;
        while (j <= i)
        {
            cout << count << " ";
            j++;
            count++;
        }

        cout << endl;
        i++;
    }

    return 0;
}