#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the order of pattern to be printed:"<<endl;
    cin>>num;

    /* 
        PRINT THE FOLLOWING PATTERN ON THE CONSOLE
    
            1 2 3 4
            1 2 3 4
            1 2 3 4
            1 2 3 4
    */
   int j=0;
   while (j<num)   // for jth column
   {
    int i=0;
    while (i<num)  // for ith row
    {
        cout<<i+1<<" ";
        i++;
    }
    cout<<"\n";
    j++;
   }
   
    return 0;
}