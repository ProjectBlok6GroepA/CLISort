#include <iostream>
#include <cstdlib>


int main() {
        int numbers[100];

    for (int i = 0; i < 100; i++) {
        numbers[i] = rand() % 1000 + 1;
    }
    for (int i = 0; i < 100; i++) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}