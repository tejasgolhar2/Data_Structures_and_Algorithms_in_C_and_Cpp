#include<iostream>
using namespace std;

int main(){
    int a=2;             // value of a is 2
    int b=a+1;           // b becomes 2+1=3
    if((a=3)==b)        // redefined value of a as 3 and equated with b=3
                        //condition becomes true
    {
        cout<<a<<endl;   // this value of a i.e., redefined 3 is obtained as output
    }
    else{
        cout<<a+1<<endl;
    }
    cout<<a;   //the redefined vaulue is obtained here

    return 0;

                 //conclusion: a value of variable can be redefined in if condition
}