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

/*  
    Pass By Value (explained in brief)
        When you pass a variable to a function by value, a copy of the variable's
    value is made, and this copy is used inside the function. Any changes made
    to the parameter inside the function do not affect the original variable
    outside the function.
*/