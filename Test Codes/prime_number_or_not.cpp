#include<iostream>
using namespace std;
int main()
{
	int num;
	bool flag;
	cout<<"Enter the number to be checked:"<<"\n";
	cin>>num;
	for(int i=2;i<num;i++)
	{
		/*if(num%i != 0)
		{
			cout<<"Number is Prime"<<endl;
		}*/

		if(num%i==0){
			cout<<"Number is Composite"<<endl;
		}
	}
	return 0;
}