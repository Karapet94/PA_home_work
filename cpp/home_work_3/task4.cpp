#include <iostream>
#include <cstring>
using namespace std;
string upper_case(char* str){
    int length = strlen(str) ;
    char upper_str[length];
    for (int i = 0; i < length; i++){
        if(int(str[i]) <= 90 ){
            upper_str[i] = str[i];
        }
        else{
            upper_str[i] = char(int(str[i]) - 32);
        }
    }
    return upper_str;
}
int main() {
    char str[8] {'w','e', 'l', 'c', 'o', 'm', 'e', '\0'};
    string upper_str;
    upper_str = upper_case(str);
    cout << upper_str << endl;
    return 0;
}
