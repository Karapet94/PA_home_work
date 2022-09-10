#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10] {'w', ' ', 'e', ' ', 'l', ' ', 'c', 'o', 'm', '\0'};
    int length = strlen(str);
    cout << length << endl;
    return 0;
}
