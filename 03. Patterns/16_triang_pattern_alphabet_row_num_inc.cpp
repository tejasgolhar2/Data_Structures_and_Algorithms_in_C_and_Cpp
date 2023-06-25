#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

            A
            B C
            C D E
            D E F G
            E F G H I
            F G H I J K

    */
    int num;
    cout << "\nEnter the number of rows (max. row no.= 13 ) present in the triangular pattern:\n";
    cin >> num;

    int i = 0;

    if (num > 14)
    {
        cout << "Bhaiiya, aapne row number ki limit exceed kr li hai !\nWe are Sorry !" << endl;
        return 0;
    }

    while ((i < num) && (num <= 13))
    {
        int j = 0;

        char ch = 'A' + i;
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