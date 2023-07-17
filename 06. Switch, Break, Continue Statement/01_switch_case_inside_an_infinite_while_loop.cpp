#include<iostream>
#include<cstdlib>  // this library contains a function that can terminate an infinitely running while loop

using namespace std;

int main()
{
    // How to come out of an infinite while loop containing a switch statement

    while(true)
    {
        int bit;
        cout<<"Enter a bit value"<<endl;
        cin>>bit;

        switch(bit)
        {
            case 0:
            cout<<"The entered bit determines Low Value"<<endl;
            break;

            case 1:
            cout<<"The entered bit determines High Value"<<endl;
            break;
        }
        exit(0);

/*          In the example above, the while loop runs indefinitely until a certain condition is met. 
        If the condition is satisfied, exit(0) is called, which terminates the program with an exit status of 0. 
        You can replace 0 with another value if you want to indicate a different exit status.
        Keep in mind that using exit() will immediately terminate the program, skipping any cleanup or 
        deinitialization code you might have. If you need to perform any cleanup tasks before exiting, 
        it's recommended to use a different mechanism, such as using a flag variable to control the loop 
        or using the break statement to break out of the loop
*/
    }
    return 0;
}