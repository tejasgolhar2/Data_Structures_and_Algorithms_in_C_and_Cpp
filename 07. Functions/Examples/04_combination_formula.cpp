#include<iostream>

using namespace std;


int fact(int a)
{
    int afact=1;
    while(a>0)
    {
        afact=afact*a;
        a--;
    }
    return afact;
}

int nCr_calculator(int a,int b)
{
    int Nr = fact(a);
    int Dr = fact(b)*fact(a-b);
    int result = Nr/Dr;
    return result;
}


int main()
{
    int n,C,r;
    cout<<"Welcome to the Combination Calculator!! "<<endl;
    cout<<"Enter value of 'n': ";
    cin>>n;
    cout<<"Enter value of 'r': ";
    cin>>r;
    cout<<"Answer is: "<<nCr_calculator(n,r)<<endl;
    return 0;
}