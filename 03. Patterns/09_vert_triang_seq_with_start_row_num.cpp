#include <iostream>

using namespace std;

int main()
{
    /*
        PRINT THE FOLLOWING PATTERN
            1
            2 3
            3 4 5
            4 5 6 7
            5 6 7 8 9
            6 7 8 9 10 11

    */

    int num;
    cout << "\nEnter the maximum number of rows present in the triangular pattern:\n";
    cin >> num;

    /*
        int i=0;
        while (i<num)
        {
            int j=0;
            while (j<=i)
            {
                cout<<i+1+j<<" ";
                j++;
            }
            i++;
            cout<<"\n";
        }

    */

    // Alternatively

    int i = 0;

    while (i < num)
    {
        int value = i;

        int j = 0;
        while (j <= i)
        {
            cout << value + 1 << " ";
            j++;
            value = value + 1;
        }

        i++;
        cout << "\n";
    }

    return 0;
}