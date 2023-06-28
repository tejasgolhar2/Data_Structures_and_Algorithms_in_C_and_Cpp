#include <iostream>

using namespace std;

int main()
{

    /*
            PRINT THE FOLLOWING PATTERN

             1 2 3 4 5 5 4 3 2 1
             1 2 3 4 * * 4 3 2 1
             1 2 3 * * * * 3 2 1
             1 2 * * * * * * 2 1
             1 * * * * * * * * 1

    */

    int num;
    cout << "\nEnter the number of rows to be present in the pattern of numbers:\n";
    cin >> num;

    int i = 0;

    while (i < num)
    {
        // print first set of numbers
        int j1 = 0;
        int num1 = num - i;
        while (num1)
        {
            cout << j1 + 1;
            j1++;
            num1--;
        }

        // print next set of stars
        int val1 = i;
        while (val1)
        {
            cout << "*";
            val1--;
        }

        // print next set of stars
        int val2 = i;
        while (val2)
        {
            cout << "*";
            val2--;
        }

        // printing last set of numbers
        int k1 = 0;
        int val3 = num - i;
        while (val3)
        {
            cout << num-k1-i;
            k1++;
            val3--;
        }

        i++;
        cout << "\n";
    }

    return 0;
}