#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter an integral value"<<endl;
    cin>>num;
    for(int i = 0; i<num; i++)
    {
        if(i==7)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

/*                   In C++, the continue statement is used to skip the remaining code 
             inside a loop iteration and move on to the next iteration. It is primarily
            used within loops (such as for, while, and do-while) to control the flow of the loop.
*/