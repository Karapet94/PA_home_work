#include <iostream>

int main() {
    int x;
    std::cout << "Please enter x ";
    std::cin >> x;

    do {
        int r = x % 10;
        std::cout << "'" << r << "' ";
        x = (x - r) / 10;
    } while (x != 0);

    return 0;
}
