//Programt to check whether the input number is even or not
#include<iostream>

using namespace std;

bool isEven(int a)
{
    if(a&1==1)
    {
        return 0;
    }
    return 1;
}

int main()
{   
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if (isEven(num)==0)
    {
        cout<<"Entered number is not Even\n";
    }
    else{
        cout<<"Entered number is Even\n";
    }
    return 0;
}