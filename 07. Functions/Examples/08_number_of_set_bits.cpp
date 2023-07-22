#include<iostream>

using namespace std;

int bitNumber(int m)
{
    int count = 0;
    while(m>0)
    {
        int bit = m & 1;
        if(bit==1)
        {
            count++;
        }
        m=m>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter the value of 'a': ";
    cin>>a;
    cout<<"Enter the value of 'b': ";
    cin>>b;
    int c = a&b;
    int result = bitNumber(c);
    cout<<"There are "<< result <<" number of set-up bits in AND of given numbers "<<a<<" and "<<b<<"."<<endl;
    return 0;
}