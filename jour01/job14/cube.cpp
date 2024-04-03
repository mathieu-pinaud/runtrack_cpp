#include <iostream>

int main () {
    int N;
    std::cout << "Entrez un entier N: ";
    std::cin >> N;
    int sum = 0;
    if (N < 5) {
        std::cout << "N doit être supérieur ou égal à 5" << std::endl;
        return 1;
    }
    for (int i = 5; i <= N; i++) {
        sum += i*i*i;
    }
    std::cout << "La somme des cubes de 5^3 à " << N << "^3 est " << sum << std::endl;
    return 0;
}