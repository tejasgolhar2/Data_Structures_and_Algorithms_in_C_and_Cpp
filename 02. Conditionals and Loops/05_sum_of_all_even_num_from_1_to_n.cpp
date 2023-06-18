#include <iostream>
using namespace std;

int main()
{
    int i = 2, n;
    int sum = 0;
    cout << "Enter the natural number upto which the sum of only even numbers is to calculated:\n";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }

    cout << "Sum is " << sum << endl;
    return 0;
}