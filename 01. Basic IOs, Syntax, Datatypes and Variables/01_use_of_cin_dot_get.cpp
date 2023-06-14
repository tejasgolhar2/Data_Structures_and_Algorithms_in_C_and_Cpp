#include <iostream>
using namespace std;

int main()
{
    /*          USE OF CIN.GET()
         The command "cin.get()" is used to get the ASCII value of any type of characters
     including tab,space,enter,numbers,alphabets and all those mentioned in ASCII Table
     */
    int a;
    cout << "Hey there ! Input any character and hit enter" << endl;
    //"Enter" is also a character
    a = cin.get();
    cout << "The value of 'a' is " << a << endl;
    return 0;
}
