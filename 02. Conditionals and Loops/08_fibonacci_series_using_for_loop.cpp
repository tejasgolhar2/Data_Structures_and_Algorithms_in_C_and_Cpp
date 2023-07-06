#include<iostream>

using namespace std;

int main()
{
    // Print the Fibonacci Series using for loop upto an input integer value given by the user
    // In Fibonacci series, the sum of previous two numbers is the third number for all numbers in the series

    int n;
    cout<<"Enter the no of terms upto which Fibonacci Series to be printed: "<<endl;
    cin>>n;

    int a = 0;
    int b = 1;
    for ( int i = 0; i < n; i++)
    {
        cout<<a<<" ";
        int modValue = a + b;
        a = b;
        b = modValue;
    }
    
    return 0;
}