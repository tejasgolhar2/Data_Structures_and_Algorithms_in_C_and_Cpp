#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to be checked whether is prime or not:\n";
    cin>>n;
    
    int i=2;

    while(i<n)
    {
        if((n%i)!=0)
        {
            if(i==n-1)
            {
                cout<<"The entered number is prime"<<endl;
            }

        //In spite of using the if condition above, we can use break statement or return 0
         
        }
        else if((n%i==0))
        {
            cout<<"The entered number is composite"<<endl;
            return 0;
        }
        i++;
    }
    return 0;
}