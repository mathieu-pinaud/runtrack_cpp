#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << "The year is bisextile." << std::endl;
            }
            else
            {
                std::cout << "The year is not bisextile." << std::endl;
            }
        }
        else
        {
            std::cout << "The year is bisextile." << std::endl;
        }
    }
    else
    {
        std::cout << "The year is not bisextile." << std::endl;
    }
    return 0;
}