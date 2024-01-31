#include <iostream>

int main() {
    int sum = 0;

    // Calculate the sum of the first 20 natural numbers
    for (int i = 1; i <= 20; ++i) {
        sum += i;
    }

    // Display the result
    std::cout << "The sum of the first 20 natural numbers is: " << sum << std::endl;

    return 0;
}
