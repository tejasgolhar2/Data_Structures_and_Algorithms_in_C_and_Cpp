#include<iostream>

using namespace std;

int main()
{
/*
    PRINT THE FOLLOWING PATTERN 
        
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
        6 5 4 3 2 1
        7 6 5 4 3 2 1

*/
    int num;
    cout<<"\nEnter the maximum number of rows present in the triangular pattern:\n";
    cin>>num;

    int i=0;
    

    while (i<num)
    {
        /*  int value=i;
            int j=0;
            while (j<=i)
            {
                cout<<value+1<<" ";
                value=value-1;
                j++;
            }
            
            cout<<"\n";
            i++;
        */

            int j=0;
            while (j<=i)
            {
                cout<<i-j+1<<" ";
                j++;
            }

            i++;
            cout<<"\n";
    }
    

    return 0;
}