#include<iostream>

using namespace std;

int main()
{
    float a,b;
    char ch;
    cout<<"Welcome to the Mini Calculator Program !\n"<<endl;
    cout<<"Enter the first value: "<<endl;
    cin>>a;
    cout<<"Enter the second value: "<<endl;
    cin>>b;
    cout<<"Enter the operation to be performed on them in character format: "<<endl;
    cin>>ch;

    switch (ch)
    {
        case '+':
        cout<< a <<" + "<< b << " = "<<a+b<<endl;
        break;

        case '-':
        cout<< a <<" - "<< b << " = "<<a-b<<endl;
        break;

        case '*':
        cout<< a <<" * "<< b << " = "<<a*b<<endl;
        break;

        case '/':
        cout<< a <<" / "<< b << " = "<<a/b<<endl;
        break;

        case '%':
        cout<< a <<" % "<< b << " = "<<int(a)%int(b)<<endl;
        break;
    }
    return 0;
}