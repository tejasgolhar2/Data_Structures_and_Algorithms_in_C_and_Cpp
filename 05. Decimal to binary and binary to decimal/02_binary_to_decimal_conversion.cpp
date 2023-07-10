#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number to be converted in decimal:"<<endl;
    cin>>n;

    // Approach 1
    
    int i = 0;
    int ans = 0;

    //the number entered by user is still considered as decimal even though he knows that its a binary num
    // we have to calulate place value for each digit by accessing it
    
    while(n)
    {
    int digit = n % 10;
    ans = ( digit * pow(2,i) ) + ans;  //place value of each digit 
    n = n/10; // results integer value
    i++;
    }

    cout<<"The decimal value for the entered binary number is: "<<ans<<endl;
    return 0;
}