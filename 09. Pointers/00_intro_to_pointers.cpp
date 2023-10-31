#include<iostream>

using namespace std;

int main()
{
	// ADDRESS OF VARIABLE

	int a=10;
	cout<<"The address of the variable 'a' is "<<&a<<endl;


	// POINTER : STORE THE ADDRESS

	int *add = &a;
	

	// ACCESS ADDRESS FROM POINTER

	cout<<"The address in the pointer 'add' is "<<add<<endl;


	// ACCESS VALUE FROM POINTER - Pointer Dereferencing

	cout<<"The values stored at the address stored by 'add' is "<< *add << endl;


	double j = 5.5;
	double *sp = &j;

	cout << "The value stored in the 'j' is " << *sp << endl;
	cout << "The address of the variable is " << sp << endl;
	cout << "The size of 'j' is " << sizeof(j) << endl;
	cout << "The size of the pointer variable is "<< sizeof(sp) <<endl;

	return 0;
}


// & is the address of operator
// The address value so obtained need to be stored in a varible
// The variable that stores the address of an entity is the Pointer
// This creates another block in the memory that stores the address value of the assigned integer into it
// Read as: add is the pointer to an integer