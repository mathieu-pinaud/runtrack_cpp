#include <iostream>
int main()
{
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    if (a % 2 == 0)
    {
        std::cout << "The number is even." << std::endl;
    }
    else
    {
        std::cout << "The number is odd." << std::endl;
    }
    return 0;
}