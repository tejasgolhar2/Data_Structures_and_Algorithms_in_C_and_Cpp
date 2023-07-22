#include <iostream>

// Function that takes an integer parameter by value

void modifyValue(int num)
{
    num = 100;
    // Changing the value of the parameter inside the function
}

int main()
{
    int number = 42;

    std::cout << "Original value: " << number << std::endl;

    // Calling the function with 'number' as an argument
    modifyValue(number);

    std::cout << "Value after function call: " << number << std::endl;

    return 0;
}
