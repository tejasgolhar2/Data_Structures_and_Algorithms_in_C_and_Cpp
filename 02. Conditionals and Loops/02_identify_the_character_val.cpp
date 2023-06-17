#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the character value:\n";
    c = cin.get(); //  here we take the input value of character in ASCII format

    cout << "The entered character value in ASCII Table is " << (int)c << endl;

    // prints the ASCII Value of the character vis typecasting

    // here we are comparing the character as ASCII value with the characters of given range

    if ((c > 'a') && (c < 'z'))
    {
        cout << "The entered character is lowercase" << endl;
    }
    else if ((c > 'A') && (c < 'Z'))
    {
        cout << "The entered character is uppercase" << endl;
    }
    else if ((c > '0') && (c < '9'))
    {
        cout << "The entered character is a numeric value" << endl;
    }

    return 0;
}