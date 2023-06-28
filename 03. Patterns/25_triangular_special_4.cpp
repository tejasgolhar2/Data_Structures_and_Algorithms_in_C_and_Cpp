#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

                  1
                2 3
              4 5 6
            7 8 9 10

    */

    int num;
    cout << "\nEnter the number of rows to be present in the trianglar pattern of numbers:\n";
    cin >> num;

    int count = 1;
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

        // for printing numbers

        int number = i + 1;
        while (number)
        {
            cout << count;
            count++;
            number--;
        }

        cout << "\n";
        i++;
    }

    return 0;
}