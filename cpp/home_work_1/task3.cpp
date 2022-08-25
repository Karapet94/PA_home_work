#include <iostream>

int main() {
    int x,y,z,k, min;
    std::cout << "Please Enter X, Y, Z, K" << std::endl;
    std::cin >> x >> y >> z >> k;

    if (x + y + z + k != 0) {
        std::cout << "Sum is not equal to 0 " << std::endl;
        return 0;
    }

    min = x;

    if (y < min) {
        min = y;
    }

    if (z < min) {
        min = z;
    }

    if (k < min) {
        min = k;
    }

    std::cout << "Min number is " << min << std::endl;

    return 0;
}
