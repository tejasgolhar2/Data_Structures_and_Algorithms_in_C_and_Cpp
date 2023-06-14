#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value of 'a':"<<"\n";
	cin>>a;
/*
	//if conditional statement
	//negative number condition 
	if(a<0)
	{
		cout<<"The value of a is negative"<<endl;
	}
	//positive number condition
	if (a>0)
	{
		cout<<"The value of a is positive"<<endl;
	}
	//zero value condition
	if(a==0)
	{
		cout<<"The value of a is zero"<<"\n";
	}
*/

	//if_else condiotional statement
	
	if(a<=0)
	{
		cout<<"The value of a is negative"<<endl;
	}
	else{
		cout<<"The value of a is positive"<<endl;
	}
	return 0;
}