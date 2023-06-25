#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

            A
            B C
            D E F
            G H I J
            K L M N O
            P Q R S T U

    */
    int num;
    cout << "\nEnter the number of rows (max. row no.= 6 ) to be present in the trianglar pattern:\n";
    cin >> num;

    int i = 0;

    if (num > 6)
    {
        cout << "Bhaiiya, aapne row number ki limit exceed kr li hai !\nWe are Sorry !" << endl;
        return 0;
    }

    char ch = 'A';

    while ((i < num) && (num <= 6))
    {
        int j = 0;

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