#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    for(int i=num;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}          