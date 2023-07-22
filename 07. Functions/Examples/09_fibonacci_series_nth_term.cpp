#include<iostream>

using namespace std;

int fibon(int x)
{
    int a=0;
    int b=1;
    int fib = 0;
    if(x==1)
    {
        return 0;
    }
    while(x>0)
    {
        fib = b + a;
        a=b;
        b=fib;
        x--;
    }
    return fib;
    
}

int main()
{
    int n;
    cout<<"Enter the term to be found in Fibonacci Sequence: ";
    cin>>n;
    int m = fibon(n);
    cout<<"The term number "<< n <<" in the Fibonacci Sequence is "<< m <<"."<<endl;
    return 0;
}