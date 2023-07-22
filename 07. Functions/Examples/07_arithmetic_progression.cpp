#include<iostream>

using namespace std;

int arithmeticProgression(int a)
{
    int term = (3*a)+7;
    return term;
}

int main()
{
    int n;
    cout<<"Enter the term to be obtained from the progression: "<<endl;
    cin>>n;
    int nth_term = arithmeticProgression(n);
    cout<<"The term number "<< n <<" in the AP is "<< nth_term <<"."<<endl;
    return 0;
}