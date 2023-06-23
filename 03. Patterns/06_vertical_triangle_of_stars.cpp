#include <iostream>

using namespace std;

int main()
{

    /*
            PRINT THE FOLLOWING PATTERN -

            *
            * *
            * * *
            * * * *
            * * * * *
            * * * * * *
    */

    int num;
    cout << "Enter the number of base stars:"
         << "\n";
    cin >> num;

    int i = 0; //  for number of rows
    while (i < num)
    {
        int j = 0;
        while (j <= i) // print star equal to row number plus one
        {
            cout << "* ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}