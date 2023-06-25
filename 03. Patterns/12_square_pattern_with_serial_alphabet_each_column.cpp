#include <iostream>

using namespace std;

int main()
{
    /*
        PRINT THE FOLLOWING PATTERN

            A B C D E
            A B C D E
            A B C D E
            A B C D E
            A B C D E

    */
    int num;
    cout << "\nEnter the maximum number of rows present in the square pattern:\n";
    cin >> num;

    int i = 0;

    while (i < num)
    {
        int j = 0;

        while (j < num)
        {
            char ch = 'A' + j;
            cout << ch << " ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}