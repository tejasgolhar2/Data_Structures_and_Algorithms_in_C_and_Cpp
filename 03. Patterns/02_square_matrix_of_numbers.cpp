#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the order of the square pattern:"<<endl;
    cin>>a;

/*  Print the following pattern on console:
        1 1 1 1 1 1
        2 2 2 2 2 2
        3 3 3 3 3 3 
        4 4 4 4 4 4
        5 5 5 5 5 5
        6 6 6 6 6 6
*/

// 'i' is for the number of columns and j is for the number of rows
    
    int i=0;
    while (i<a)
    {
        int j=0;
        while (j<a)
        {
            cout<<(i+1)<<" ";  
            j++;
        }
        cout<<"\n";
        i++;
    }
    
    return 0;
}