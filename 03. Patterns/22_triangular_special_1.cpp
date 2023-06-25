#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN


        1 1 1 1 1
          2 2 2 2
            3 3 3
              4 4
                5


    */

    int num;
    cout << "\nEnter the number of rows to be present in the trianglar pattern of numbers:\n";
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

        // for printing numbers
        int number = num - i;
        while (number)
        {
            cout << (i + 1);
            number--;
        }

        cout << endl;
        i++;
    }

    return 0;
}