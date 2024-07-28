#include <iostream>

int main()
{

    // DATA TYPE -> determines what kind of value we are storing (number, letter, etc...)

    int number = 1; // number is a variable that stores integers

    // defining multiple variables
    int a;
    int b;
    // the same as
    int a, b;

    // common errors
    // int a, int b; (wrong) -> int a, b; (correct)
    // int a, couble b; (wrong) -> int a; double b; (correct but not recommended)
    //  correct and recommended
    int a;
    double b;

    // VARIABLE ASSIGNMENT
    int width;
    width = 5;

    // INITIALIZATION
    int width{5};
    int b = 5;
    int c(6);

    // list initialization methods
    int d{7};    // direct list initialization
    int e = {8}; // copy list initialization
    int f{};     // value initialization

    // WHEN SHOULD I INITIALIZE WITH { 0 } vs { }
    // Use an explicit initialization value if you’re actually using that value.

    int x{0};       // explicit initialization to value 0
    std::cout << x; // we're using that zero value

    // Use value initialization if the value is temporary and will be replaced.

    int x{};       // value initialization
    std::cin >> x; // we're immediately replacing that value

    // Initializing multiple variables
    int a = 1, b = 2; // both need to be initialized no just one

    // FUNDAMENTAL DATA TYPES

    int num = 5; // integer (4 byte)
    // variants of int
    short int num;     // smaller range than int
    long int num;      // larger range than int
    long long int num; // even larger range than long int

    float pi = 3.14;                         // float provides single-precision (4 bytes)
    double pi_high_precision = 3.1415926535; // double provides more precision (8 bytes)

    char letter = 'a'; // character (1 byte)

    bool is_true_or_false = true; // boolean represents logical values (true or false) (1 byte)

    // DERIVED DATA TYPES

    // ARRAY
    int numbers[5] = {1, 2, 3, 4, 5}; // stores multiple values of the same data type in consecutive memory locations

    // POINTERS
    int num = 42;
    int *pNum = &num; // store the memory address of the variable.

    // REFERENCES
    int num = 51;
    int &numRef = num; // share memory location, this allow us to create an alias for another variable

    // STRUCTURES
    struct Person
    {
        std::string name;
        int age;
        float height;
    };

    Person person_1 = {"Gabriel Zu", 21, 1.78};

    // CLASSES

    class Cat
    {
    public:
        std::string name;
        float age;

        void printInfo()
        {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
        };
    };

    Cat kitty;
    kitty.name = "Little One";
    kitty.age = 0.2;

    // UNIONS

    union Data
    {
        int num;
        char letter;
        float decimal;
    };

    Data myData;
    myData.num = 42;

    // Unions are used to store diff data types in the same memory location.

    return 0;
}