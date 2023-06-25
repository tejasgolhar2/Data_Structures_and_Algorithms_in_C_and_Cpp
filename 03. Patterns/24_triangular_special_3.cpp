#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

        1 2 3 4 5 6
          2 3 4 5 6
            3 4 5 6
              4 5 6
                5 6
                  6

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
        int val = i + 1;
        while (number)
        {
            cout << val;
            val = val + 1;
            number--;
        }

        cout << "\n";
        i++;
    }

    return 0;
}