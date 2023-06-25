#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN


                    1
                2 2 2
              3 3 3 3
            4 4 4 4 4
          5 5 5 5 5 5
        6 6 6 6 6 6 6

    */

    int num;
    cout << "\nEnter the number of rows to be present in the trianglar pattern of numbers:\n";
    cin >> num;

    int i = 0;
    while (i < num)
    {
        // for printing spaces
        int space = (num - i - 1);
        while (space)
        {
            cout << " ";
            space--;
        }

        // for printing numbers
        int number = i + 1;
        while (number)
        {
            cout << i + 1;
            number--;
        }

        cout << "\n";
        i++;
    }

    return 0;
}