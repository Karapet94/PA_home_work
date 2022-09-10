#include <iostream>
#include <cstring>
using namespace std;
string reverse(char* str){
    int length = strlen(str) ;
    char reverse_str[length];
    for (int i = 0; i < length; i++){
        i[reverse_str] = str[length - 1 - i];
    }
    return reverse_str;
}
int main() {
    char str[8] {'w','e', 'l', 'c', 'o', 'm', 'e', '\0'};
    string rev_str;
    rev_str = reverse(str);
    cout << rev_str << endl;
    return 0;

}
