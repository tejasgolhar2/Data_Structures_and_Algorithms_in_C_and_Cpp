#include <iostream>

using namespace std;

int main()
{
    /*
        PRINT THE FOLLOWING PATTERN

            A A A A A
            B B B B B
            C C C C C
            D D D D D
            E E E E E

    */
    int num;
    cout << "\nEnter the maximum number of rows present in the square pattern:\n";
    cin >> num;

    int i = 0;
    int value = 65; // ASCII Value for capital A = 65
    while (i < num)
    {
        int j = 0;
        while (j < num)
        {
            cout << (char)value << " "; // typecasting ascii value into characters
            j++;
        }
        cout << "\n";
        i++;
        value++;
    }

    // Alternatively
    /*
        int i=0;
        while(i<num)
        {
            char ch = 'A' + i;

            int j=0;
            while(j<num)
            {
                cout<<ch<<" ";
                j++;
            }
            i++;
            cout<<"\n";
        }
        */

    return 0;
}