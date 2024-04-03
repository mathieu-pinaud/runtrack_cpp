#include <iostream>

int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::string str = std::to_string(a);
    std::string revStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    std::cout << revStr << std::endl;
    return 0;
}