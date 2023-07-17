#include<iostream>
using namespace std;


int exponent(int m,int n)
{
    
    int exp = 1;
    for (int i = 0; i < n; i++)
    {
        exp = exp * m;
        
        if(i==n-1)
        {
            cout<<exp<<endl;
        }
    }
    return 0;
}

auto consent()
{
    char con;
    cout<<"Calculate Exponent: Y/N"<<endl;
    cin>>con;
    if(con=='Y')
    {
        int a,b;
        cout<<"Enter a number: ";
        cin>>a;
        cout<<"Enter the exponent value: ";
        cin>>b;
        exponent(a,b);
    }
    else if(con=='N')
    {
        cout<<"Thank You for using the Exponet Calculator program"<<endl;
        return 0;
    }
   return 0;
}


int main()
{
    cout<<"Welcome to Exponent Calculator Program !"<<endl;
    consent();
   
    return 0;
}