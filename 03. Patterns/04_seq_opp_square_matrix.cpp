#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the order of square matrix pattern to be printed:" << endl;
    cin >> num;

    /*
            Print the following pattern on console
                4 3 2 1
                4 3 2 1
                4 3 2 1
                4 3 2 1
    */

    int i = 0; // for ith number of row
    while (i < num)
    {
        int j = 0;
        while (j < num)
        {
            cout << num - j << " ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}