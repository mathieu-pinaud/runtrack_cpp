#include <iostream>

template<int N>
struct Fibonacci {
    static constexpr int value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template<>
struct Fibonacci<0> {
    static constexpr int value = 0;
};

template<>
struct Fibonacci<1> {
    static constexpr int value = 1;
};

int main() {
    std::cout << "Fibonacci(0) = " << Fibonacci<0>::value << std::endl;
    std::cout << "Fibonacci(1) = " << Fibonacci<1>::value << std::endl;
    std::cout << "Fibonacci(2) = " << Fibonacci<2>::value << std::endl;
    std::cout << "Fibonacci(3) = " << Fibonacci<3>::value << std::endl;
    std::cout << "Fibonacci(4) = " << Fibonacci<4>::value << std::endl;
    std::cout << "Fibonacci(5) = " << Fibonacci<5>::value << std::endl;
    std::cout << "Fibonacci(6) = " << Fibonacci<6>::value << std::endl;
    std::cout << "Fibonacci(7) = " << Fibonacci<7>::value << std::endl;
    std::cout << "Fibonacci(8) = " << Fibonacci<8>::value << std::endl;
    std::cout << "Fibonacci(9) = " << Fibonacci<9>::value << std::endl;

    return 0;
}
