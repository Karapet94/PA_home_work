#include <iostream>

int main() {
    int x;
    int sum = 0;

    std::cout << "Please enter x ";
    std::cin >> x;

    do {
        int r = x % 10;
        sum += r;
        x = (x - r) / 10;
    } while (x != 0);

    std::cout << "Result is " << sum << std::endl;

    return 0;
}
