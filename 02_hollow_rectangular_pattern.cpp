#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the number of rows";
    cin>>rows;
    cout<<"Enter the number of columns";
    cin>>cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ((i==0) || i==(rows-1))
            {
                cout<<"*";
            }
            else if((j==0)||(j==(cols-1))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
    

    
    return 0;
}