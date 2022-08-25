#include <iostream>

int main() {
    int x,y,z, max;
    std::cout << "Please Enter X, Y, Z" << std::endl;
    std::cin >> x >> y >> z;
    
    max = x;
    
    if (y > max) {
        max = y;
    }
    
    if (z > max) {
        max = z;
    }

    std::cout << "Max number is " << max << std::endl;

    return 0;
}
