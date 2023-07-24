#include <iostream>
#include <algorithm> // Para std::fill_n
#include <ctime>

#define INF 1000
#define UNVISITED -1

long long int memorize[INF + 1];

// Recursive Fibonacci function with memoization
long long int fibonacciDIN(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    if (memorize[x] == UNVISITED) {
        memorize[x] = fibonacciDIN(x - 1) + fibonacciDIN(x - 2);
    }
    return memorize[x];
}

// Recursive Fibonacci function without memoization
long long int fibonacciREC(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    return fibonacciREC(x - 1) + fibonacciREC(x - 2);
}

int main() {
    int x = 20; // (0 <= x <= 92)

    std::fill_n(memorize, INF + 1, UNVISITED);

    clock_t startREC = clock();
    std::cout << fibonacciREC(x) << std::endl;
    clock_t endREC = clock();

    double durationREC = static_cast<double>(endREC - startREC) / CLOCKS_PER_SEC;
    std::cout << "Without memoization: " << durationREC << std::endl;

    clock_t startDIN = clock();
    std::cout << fibonacciDIN(x) << std::endl;
    clock_t endDIN = clock();

    double durationDIN = static_cast<double>(endDIN - startDIN) / CLOCKS_PER_SEC;
    std::cout << "With memoization: " << durationDIN << std::endl;

    double difference = durationREC - durationDIN;
    std::cout << "Duration difference: " << difference << std::endl;

    return 0;
}
