#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 2 and 6 to the respective multiplication table: " << endl;
    cin >> num;

    switch (num)
    {
    // only integer and character datatypes are allowed to define case signature. Floats and Strings are not allowed.
    case 2:
        for (int i = 1; i <= 10; i++)
        {
            cout << 2 << " * " << i << " = " << 2 * i << endl;
        }
        break;

    case 3:
        for (int i = 1; i <= 10; i++)
        {
            cout << 3 << " * " << i << " = " << 3 * i << endl;
        }
        break;

    case 4:
        for (int i = 1; i <= 10; i++)
        {
            cout << 4 << " * " << i << " = " << 4 * i << endl;
        }
        break;

    case 5:
        for (int i = 1; i <= 10; i++)
        {
            cout << 5 << " * " << i << " = " << 5 * i << endl;
        }
        break;

    case 6:
        for (int i = 1; i <= 10; i++)
        {
            cout << 6 << " * " << i << " = " << 6 * i << endl;
        }
        break;
    }
    return 0;
}