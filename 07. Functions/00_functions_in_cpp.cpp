#include <iostream>

using namespace std;

void table(void)
{
    int num;
    cout << "Enter the number whose multiplication table is to be printed:" << endl;
    cin >> num;

    for (int j = 1; j <= 10; j++)
    {
        cout << num << " * " << j << " = " << num * j << endl;
    }
}

int main()
{
    int n;
    cout << "Welcome to the Multiplication Table Printer Program" << endl;
    cout << "Please tell no. of multiplication tables you want to print: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        table();
    }
    return 0;
}
