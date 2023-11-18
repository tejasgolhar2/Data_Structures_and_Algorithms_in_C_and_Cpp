#include <iostream>
using namespace std;

int main()
{
/*          USE OF CIN.GET()
        
	cin ignores ENTER(\n), TAB(\t) and SPACE( ) while taking input. These are called Whitespace Characters.
	We use cin.get() to read these whitespace characters
*/
     
    int a;
    cout << "Hey there ! Input any character and hit enter" << endl;
    //"Enter" is also a character
    a = cin.get();
    cout << "The value of 'a' is " << a << endl;
    return 0;
}
