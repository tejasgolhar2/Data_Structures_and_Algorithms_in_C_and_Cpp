#include<iostream>

using namespace std;

bool isPrime(int n)
{
    bool flag=0;
    for(int i=2;i<n;i++)
    {
        if((n%i==0))
        {
            flag=1;
            return 0;
        }
        
        if((n%i!=0)&&(flag==0))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num;
    cout<<"Welcome to Prime Number Checker"<<endl;
    cout<<"Enter number to be checked: ";
    cin>>num;

    if (isPrime(num)==1)
    {
        cout<<"Entered number is Prime"<<endl;
    }
    else{
        cout<<"Entered number is Non-Prime"<<endl;
    }
    return 0;
}