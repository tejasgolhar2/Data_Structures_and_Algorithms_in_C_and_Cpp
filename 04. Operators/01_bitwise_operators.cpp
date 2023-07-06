#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h;
    cout << "Enter an integer value for varible 'a':\n";
    cin >> a;
    cout << "Enter an integer value for varible 'a':\n";
    cin >> b;

    // Lets perform Bitwise Operations

    c = a & b;
    cout << " The result of a & b is : " << c << endl;

    d = a | b;
    cout << " The result of a | b is : " << d << endl;

    e = ~a;
    cout << " The result of ~ a is : " << e << endl;

    f = ~b;
    cout << " The result of ~ b is : " << f << endl;

    g = a ^ b;
    cout << " The result of a ^ b is : " << g << endl;

    return 0;
}