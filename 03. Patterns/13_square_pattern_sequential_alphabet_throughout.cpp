#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

            A B C D E
            F G H I J
            K L M N O
            P Q R S T
            U V W X Y

    */
    int num;
    cout << "\nEnter the number of rows (max. row no.= 5 ) present in the square pattern:\n";
    cin >> num;

    int i = 0;

    if (num > 5)
    {
        cout << "Bhaiiya, aapne row number ki limit exceed kr li hai !\nWe are Sorry !" << endl;
        return 0;
    }

    char val = 'A';
    while ((i < num) && (num <= 5))
    {
        int j = 0;
        while (j < num)
        {
            cout << val << " ";
            val = val + 1;
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}