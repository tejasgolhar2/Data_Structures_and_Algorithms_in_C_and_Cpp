#include<iostream>

using namespace std;

void printCounting(int n)
{
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int num;
    cout<<"Program to Print Natural Numbers till given number "<<endl;
    cout<<"Enter a number: ";
    cin>>num;
    printCounting(num);
    return 0;
}