#include <iostream>

int main(){
    double kgPriceHt, kgNb, tva, total;
    std::cout << "Enter the price per kilogram: ";
    std::cin >> kgPriceHt;
    std::cout << "Enter the number of kilograms: ";
    std::cin >> kgNb;
    std::cout << "Enter the TVA rate: ";
    std::cin >> tva;
    total = kgPriceHt * kgNb * (1 + tva / 100);
    std::cout << "The total price is: " << total << std::endl;
}