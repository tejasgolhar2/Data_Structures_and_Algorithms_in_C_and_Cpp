#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN


        * * * * *
          * * * *
            * * *
              * *
                *


    */

    int num;
    cout << "\nEnter the number of rows to be present in the trianglar pattern of stars:\n";
    cin >> num;

    int i = 0;
    while (i < num)
    {

        // for printing spaces

        int space = i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // for printing stars

        int star = num - i;
        while (star)
        {
            cout << " *";
            star--;
        }

        cout << "\n";
        i++;
    }

    return 0;
}