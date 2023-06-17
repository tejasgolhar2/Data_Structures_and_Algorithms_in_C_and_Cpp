#include<iostream>
using namespace std;

int main(){
    int a=24;

    if (a>20) //checked for the condition
    //found true
    {
        cout<<"My name ";// printed this
    }
    else if(a==24)
    {
        cout<<" Tejas ";
    }
    else
    {
        cout<<" Don ";
    }
    cout<<a; //prints the value of a=24

    return 0;

    //conclusion:
    //            if the attempted first condition is found true then the dataflow comes 
    //     out of the conditional statements regardless of whether the rest/followed conditions are true or not

    //output: My name 24
    
}