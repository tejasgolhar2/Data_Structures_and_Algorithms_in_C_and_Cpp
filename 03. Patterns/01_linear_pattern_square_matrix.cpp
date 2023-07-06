#include <iostream>
using namespace std;

int main()
{
    /*       Print the following square matrix pattern on console

            * * * * * * *
            * * * * * * *
            * * * * * * *
            * * * * * * *
            * * * * * * *
            Here, a = 6
    */
    int a, b;
    cout << "Enter the number of rows:" << endl;
    cin >> a;
    cout << "For sqaure pattern, Number of rows and columns are equal" << endl;

    int i = 0;
    while (i < a) // for 'a' number of rows
    {
        int j = 0;
        while (j < a) // for equal number of columns
        {
            cout << "* ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}