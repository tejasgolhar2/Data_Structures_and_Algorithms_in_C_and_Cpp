#include<iostream>
using namespace std;
int main()
{
    //use of cin
    int a,b;
    cout<<"Test code 01\n";
    cin>> a >> b;
    cout<<"The values of a and b are "<< a <<" and "<< b <<"."<< endl;
    return 0;

    //we can enter values of a and b in console by adding space, hitting enter and also separating by tab button.
    //     This means space, enter and tab are not read by the compiler when using cin for input of values

    // to take the value of space, tab, enter as input; we can use --->>>  cin.get() as used in program 00
}