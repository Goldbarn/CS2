// Rowan Ess
// 18 Oct 2024
// CS2 recursion

#include <iostream>

int fibonacciRecursive(int number) {
    if (number == 0) { return 0; }
    if (number == 1) { return 1; }
    int result = fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
    return result;
}

int fibonacciTail(int number, int prev = 1, int prevprev = 0) {
    if (number == 0) { return prevprev; }
    if (number == 1) { return prev; }
    return fibonacciTail(number - 1, prev + prevprev, prev);   
}

int main() {
    std::cout << "Number? ";
    int number;
    std::cin >> number;
    for (int i = 0; i <= number; ++i) {
        std::cout << "FibRec " << i << " : " << fibonacciRecursive(i) << '\n';
    }
    for (int i = 0; i <= number; ++i) {
        std::cout << "FibTail " << i << " : " << fibonacciTail(i) << '\n';
    }

}
