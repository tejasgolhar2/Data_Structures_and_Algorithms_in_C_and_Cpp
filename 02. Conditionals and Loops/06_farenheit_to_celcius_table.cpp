#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the temperature in 'Celcius' \nupto which the 'Farenheit to Degree Celcius Table' is to be obtained:" << endl;
    int cel;
    cin >> cel;
    int i = 0;

    while (i <= cel)
    {
        float far = 32 + (1.8 * i);
        // formul to convert degree centigrade into farenheit
        cout << i << " deg Cent <--> " << far << " F" << endl;
        i++;
    }

    return 0;
}