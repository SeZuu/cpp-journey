#include <iostream>

int main()
{

    // BASIC ARITHMETIC OPERATORS

    int a = 5, b = 1;

    int sum = a + b;                         // addition
    int diff = a - b;                        // substraction
    int product = a * b;                     // multiplication
    int div = a / b;                         // division operator (integer)
    float div_decimal = float(a) / float(b); // casting (integer -> float)
    int mod = a % b;                         // reminder of an integer division

    // increment operator
    int x = 5;
    int y = ++x; // x = 6, y = 6 ( prefix increments the value before returning it)
    int z = x++; // x = 7, z = 6 ( postfix return the value first and then increments it)

    // decrement operator
    int c = 5;
    int d = --c; // c = 4, d = 4;
    int e = c--; // c = 3, e = 4;

    // RELATIONAL OPERATORS

    // equal to
    5 == 5; // true
    5 == 3; // false

    // not equal to
    5 != 2; // true
    1 != 1; // false

    // grather than (>)
    5 > 3; // true
    3 > 5; // false

    // less than (<)
    5 < 3; // false
    3 < 5; // true

    // grather than or equal to (>=)
    5 >= 2; // true
    2 >= 2; // true
    1 >= 2; // false

    // LOGICAL OPERATORS

    // and ( && ) return true if both are true
    true && true;  // true
    true && false; // false

    // or ( || ) return true if one of the operators is true
    true || false;  // true
    false || false; // false

    // NOT( ! ) return true if the operand is false and vice versa
    !true;  // false
    !false; // true

    // EXPRESSIONS (expression1 (logical operator) expresssion 2) -> (expression1 && expression2)

    if (a > 0 && b > 0)
    { // AND (&&) -> TRUE (in this case)
        std::cout << "Both values are positive" << std::endl;
    }

    if (a > 0 || a > 20)
    { // OR (||) -> TRUE
        std::cout << "At least one expression is true" << std::endl;
    }

    if (!(a < 0))
    { // !(expression) -> !(false) -> TRUE
        std::cout << "The value is not negative" << std::endl;
    }

    // al ittle more complex logical expression
    int numberA = 1, numberB = -1, numberC = 10;

    if (numberA > 0 && (numberB < 0 || numberC < 0))
    {
        std::cout << "At least one value is positive and other is negative" << std::endl;
    }

    return 0;
}