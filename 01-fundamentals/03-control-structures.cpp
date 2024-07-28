#include <iostream>

int main()
{

    // CONDITIONALS

    // IF
    if (10 > 5)
    {
        //...
    }

    // with else
    if (5 > 2)
    {
        //...
    }
    else
    {
        //...
    }

    // with if else
    if (5 > 2)
    {
        //...
    }
    else if (5 == 5)
    { // else if needs an expression
      //...
    }
    else
    {
        //...
    }

    // SWITCH
    // select from multiple options based on variable value
    char letter = 'b';
    switch (letter)
    {
    case 'a':
        //...
        break;
    case 'b':
        //...
        break;
    case 'c':
        //...
        break;
    default:
        //...
        break;
    }

    // LOOPS
    // repeat a block of code a specific number of times

    // for (initialization; condition; increment/decrement) {
    //  block of code to execute
    //}

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Iteration: " << i << std::endl;
    }

    // while
    // while (condition) { block of code }

    int iterator = 0;
    while (iterator < 10)
    {
        std::cout << iterator << std::endl;
        iterator++;
    }

    // do-while
    // do { block of code } while (condition) -> the loop body is executed at least once

    do
    {
        std::cout << "do-while executes at least once" << std::endl;
    } while (false);

    // LOOP CONTROL
    // continue and break

    // break -> leaves the loop

    for (int i = 0; i < 10; ++i)
    {
        if (i == 5)
        {
            break;
        }
        std::cout << "i is " << i << std::endl;
    }

    // continue -> skips the actual iteration and continues with the next one

    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        std::cout << "i is " << i << std::endl;
    }

    return 0;
}