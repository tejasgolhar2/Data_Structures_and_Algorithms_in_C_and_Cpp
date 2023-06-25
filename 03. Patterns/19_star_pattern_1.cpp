#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN


                *
              * *
            * * *
          * * * *
        * * * * *


    */

    int num;
    cout << "\nEnter the number of rows to be present in the trianglar pattern of stars:\n";
    cin >> num;

    int i = 0;

    while (i < num)
    {

        // for printing spaces

        int space = num - i - 1;

        while (space)
        {
            cout << " ";
            space--;
        }

        // for printing stars
        int j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }

        cout << "\n";
        i++;
    }

    return 0;
}