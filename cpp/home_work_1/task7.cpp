#include <iostream>

int main() {
    int a,b;

    std::cout << "Please enter a ";
    std::cin >> a;
    std::cout << "Please enter b ";
    std::cin >> b;
    std::cout << std::endl;

    a = a+b;
    b = a-b;
    a = a-b;

    std::cout << "changed a and b numbers are " << a << " <->  " << b << std::endl;

    return 0;
}
