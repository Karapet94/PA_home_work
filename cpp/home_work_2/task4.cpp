#include <iostream>
using namespace std;
int main() {
    int a = 1, b = 2, c;
    cout << a <<endl  << b <<endl;
    while (a + b < 4000000)
    {   c = a + b;
        a = b;
        b = c;
        cout << c <<endl;
        
    }

    return 0;
}
