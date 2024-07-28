#include <iostream>

// FUNCTIONS

// return_type function_name(parameter list) { function body }

int addNumbers(int number1, int number2)
{
    return number1 + number2;
}

// void functions are called procedures (do not return nothing)
void printSomething()
{
    std::cout << "Something" << std::endl;
}

char functionToUseLater(char letter);

int main()
{

    std::cout << "the sum of 5 and 1 is: " << addNumbers(5, 1) << std::endl;
    char character = functionToUseLater('a');

    // calling the void function
    printSomething();

    return 0;
}

// now is defined
char functionToUseLater(char letter)
{
    return letter;
}