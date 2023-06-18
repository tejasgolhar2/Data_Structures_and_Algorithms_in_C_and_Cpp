#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter the value of 'a':"
		 << "\n";
	cin >> a;
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
	/*
		//if_else condiotional statement

		if(a<=0)
		{
			cout<<"The value of a is negative"<<endl;
		}
		else{
			cout<<"The value of a is positive"<<endl;
		}
	*/
	/*
	// Use of " IF - ELSE - IF" Conditional Statement

			if(a<0)
			{
				cout<<"The value of a is negative"<<endl;
			}
			else if(a==0)
				{
					cout<<"The value of a is zero"<<endl;
				}
				else
					{
						cout<<"The value of a is positive"<<endl;
					}
	*/

	// "NESTED IF ELSE" Statement

	if (a < 0)
	{
		cout << "A is Negative" << endl;
	}
	else
	{
		if (a == 0)
		{
			cout << "A is Zero" << endl;
		}
		else
		{
			cout << "A is Positive" << endl;
		}
	}
	return 0;
}