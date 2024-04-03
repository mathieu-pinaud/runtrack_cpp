#include <iostream>
int main()
{
    double res = 0;
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    res += a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    res += a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    res += a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    res += a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    res += a;
    std::cout << res / 5 << std::endl;
}