#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
        6 6 6 6 6 6
    */
    int num;
    cout << "Enter the maximum number present at the base of the triangle:"
         << "\n";
    cin >> num;
    int i = 0;
    while (i < num)
    {
        int j = 0;
        while (j <= i)
        {
            cout << (i + 1) << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}