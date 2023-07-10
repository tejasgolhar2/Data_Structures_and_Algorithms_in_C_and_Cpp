#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the decimal number whose binary value is to be calculated: "<<endl;
    cin>>n;

    // Approach 1
    
    int ans = 0;
    int i = 0;

    while(n)
    {
        int bit = n & 1;  // the last bit of the number is obtained in this operation 
        //int bit = n | 0 ;    <<----  alternative logical expression
        
        ans = ( bit * pow(10,i) ) + ans;  
        //the number to be obtained first will move to LSB side hence we have to invert the number
        // NOTE : pow represents power operation and is included in math.h lib
        
        n = n >> 1;
        i++;

    }

    cout<<"The binary value is : "<<ans<<endl;
    return 0;
}