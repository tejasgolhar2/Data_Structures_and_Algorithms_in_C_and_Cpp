#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter the number upto which Natural Sum is to be obtained:\n";
    cin >> n;

    // WHILE LOOP
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    // the below statement will only be executed when the above condition becomes false
    cout << "The sum is " << sum << " ." << endl;

    return 0;
}