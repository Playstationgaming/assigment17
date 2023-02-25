#include <iostream>

void printPattern(int n) {
    std::cout << n << ", ";
    if (n <= 0) {
        return;
    }
    printPattern(n-5);
    std::cout << n << ", ";
}

int main() {
    int n;
    std::cin >> n;
    printPattern(n);
    std::cout << std::endl;
    return 0;
}
