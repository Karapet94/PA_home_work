#include <iostream>

int main() {
    int a,b, sum;
    char sign;

    std::cout << "Please enter first number ";
    std::cin >> a;

    std::cout << "Please enter second number ";
    std::cin >> b;

    std::cout << "Please enter operator ";
    std::cin >> sign;

    if (sign == '/') {
        if(b == 0) {
            std::cout << "Division by zero " << std::endl;
            return 0;
        }
        sum = a / b;
    } else if (sign == '*') {
        sum = a * b;
    } else if (sign == '+') {
        sum = a + b;
    } else if (sign == '-') {
        sum = a - b;
    } else {
        std::cout << "Please enter valid operator. + , - , / , * " << std::endl;
        return 0;
    }

    std::cout << "Result is " << sum << std::endl;

    return 0;
}
