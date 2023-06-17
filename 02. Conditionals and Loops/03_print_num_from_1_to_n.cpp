#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number upto which natural numbers are to be printed:\n";
    cin>>n;

    // "WHILE LOOP"

    int i=1;
    while (i<=n)
    {
        cout<<i<<"\n";
        i+1;
    }
    
    return 0;
}