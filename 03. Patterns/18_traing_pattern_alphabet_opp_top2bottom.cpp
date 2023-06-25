#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

            F
            E F
            D E F
            C D E F
            B C D E F
            A B C D E F


    */

    int num;
    cout << "\nEnter the number of rows (max. row no.= 26 ) to be present in the trianglar pattern:\n";
    cin >> num;

    int i = 0;

    if (num > 26)
    {
        cout << "Bhaiiya, aapne row number ki limit exceed kr li hai !\nWe are Sorry !" << endl;
        return 0;
    }

    while ((i < num) && (num <= 26))
    {
        int j = 0;

        char ch = ('A' + num - i - 1);
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << "\n";

        i++;
    }

    return 0;
}