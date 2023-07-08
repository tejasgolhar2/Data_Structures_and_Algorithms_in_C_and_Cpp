#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to be checked whether is prime or not:\n";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            cout<<"The number entered is Composite\n";
            break;
        }
        else if((n%i!=0)&&(i==n-1))
        
        {
            cout<<"The number entered is Prime\n";
        }
    }
    
    return 0;
}