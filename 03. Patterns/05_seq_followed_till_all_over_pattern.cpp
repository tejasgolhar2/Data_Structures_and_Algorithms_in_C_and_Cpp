#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the order of pattern:"
         << "\n";
    cin >> num;

    /*  PRINT THE FOLLOWING PATTERN

                    1   2  3  4
                    5   6  7  8
                    9  10 11 12
                    13 14 15 16

    */
    int i = 0;
    while (i < num)
    {
        int j = 0;
        while (j < num)
        {
            cout << j + num * i + 1 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }

    /*
      //  Alternatively ( Easy Way )

        int i=0;
        int count = 1;
        while(i<num)
        {
            int j=0;
            while(j<num)
            {
                cout<<count<<" ";
                count++;
                j++;
            }
            cout<<"\n";
            i++;
        }
    */
    return 0;
}