#include <iostream>
int main()
{
    int a;
    int b;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    return 0;
}