#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    // Simple user input and output test
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "! Welcome to C++ programming on macOS." << std::endl;

    // Basic math operation
    int a = 5;
    int b = 10;
    int sum = a + b;
    std::cout << "Here's a simple calculation: " << a << " + " << b << " = " << sum << std::endl;

    return 0;
}
