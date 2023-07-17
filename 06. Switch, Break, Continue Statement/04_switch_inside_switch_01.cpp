#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number :  0/1"<<endl;
    cin>>n;

    switch(n)
    {
        case 0:
        {    cout<<"You have entered 0"<<endl;
            switch(n)
            {    case 0:
                    cout<<"This line executed for switch within switch"<<endl;
            }
            break;
        }
        case 1:
        { 
             cout<<"You have entered 1"<<endl;
             break;
        }
    }

    return 0;
}
/*
        In C++, you cannot directly use a switch statement inside another switch statement. 
        However, you can achieve similar functionality by nesting switch statements within 
        if-else statements.
*/