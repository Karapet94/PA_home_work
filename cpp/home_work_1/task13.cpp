#include <iostream>
    int multiplier(int x, int y, int z){
	return x*y*z;
    }
int main() {
    int x,y,z, mul;
    std::cout << "Please Enter X, Y, Z" << std::endl;
    std::cin >> x >> y >> z;
   
    mul = multiplier(x,y,z);

    std::cout << "Result is " << mul << std::endl;

    return 0;
}
