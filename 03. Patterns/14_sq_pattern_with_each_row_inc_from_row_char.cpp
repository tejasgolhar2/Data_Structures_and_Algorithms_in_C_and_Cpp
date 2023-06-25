#include <iostream>

using namespace std;

int main()
{

    /*
        PRINT THE FOLLOWING PATTERN

            A B C D E
            B C D E F
            C D E F G
            D E F G H
            E F G H I

    */
    int num;
    cout << "\nEnter the number of rows (max. row no.= 5 ) present in the square pattern:\n";
    cin >> num;

    int i = 0;

    while (i < num)
    {
        int j = 0;

        char val = 'A'+ i;

        while (j < num)
        {
            cout <<val<< " ";
            val=val+1;
            j++;
        }
        cout << "\n";
        i++;
    }

// Alternatively
/* 
    int i = 0;
    while(i<num)
    {
        int j = 0;
        while(j<num)
        {
            char ch = 'A'+ i + j ;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }*/

    return 0;
}