#include <iostream>

using namespace std;

int main()
{
    int ch;
    cout << "Enter a punctuation mark among (! ? .)" << endl;
    cin >> ch;

    switch (ch)
    {

    case '!':
        cout << "Oh my god .. " << endl;
        break;

    case '?':

        /*      if(ch == '?')
                {
                    continue;
                }
        */
        cout << "What the .. .." << endl;
        break;

    case '.':
        cout << "My name is You .." << endl;
        break;

    defaut:
        cout << "AApko shayd se pata nhi chl rha ye kya hai" << endl;
    }
    return 0;
}

/*
        In C++, using the continue statement inside a switch statement will have no effect on
    skipping a specific case. The continue statement is designed to be used within loops
    (such as for, while, and do-while) to control the flow of the loop, and it cannot be
    used directly inside a switch statement.

        If you attempt to use continue within a switch statement, it will result in a compilation error.

        In the above example, attempting to use continue within the switch statement results in a compilation
    error because continue is not allowed outside of loop constructs.

        If you need to skip a specific case in a switch statement, you can achieve that by using break
    to exit the case block, effectively skipping the subsequent case statements.
*/