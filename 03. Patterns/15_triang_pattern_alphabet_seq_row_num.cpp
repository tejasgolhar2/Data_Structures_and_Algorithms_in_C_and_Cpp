#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

            A
            B B
            C C C
            D D D D
            E E E E E
            F F F F F F

    */
    int num;
    cout << "\nEnter the number of rows (max. row no.= 26 ) present in the triangular pattern:\n";
    cin >> num;

    int i = 0;

    if (num > 26)
    {
        cout << "Bhaiiya, aapne row number ki limit exceed kr li hai !\nWe are Sorry !" << endl;
        return 0;
    }

    while ((i < num)&&(num<=26))
    {
        int j = 0;

        char val = 'A' + i;

        while (j <= i)
        {
            cout << val << " ";
            j++;
        }
        cout << "\n";
        val = val + 1;
        i++;
    }

    return 0;
}