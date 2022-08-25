#include <iostream>

int main() {
    int x,y,z, min;
    std::cout << "Please Enter X, Y, Z" << std::endl;
    std::cin >> x >> y >> z;

    min = x;

    if (y < min) {
        min = y;
    }

    if (z < min) {
        min = z;
    }

    std::cout << "Min number is " << min << std::endl;

    return 0;
}
