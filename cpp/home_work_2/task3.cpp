#include <iostream>
 using namespace std;
 
 int main()
 {
    int even_sum = 0, odd_mul = 1;
    int random_list[7];
    cout << "Please fill list by 7 inetgers  : " << endl;
    
    int length_of_list = sizeof(random_list) / sizeof(int);
    for (int i = 0; i <  length_of_list; i++)
    {
       cin >> random_list[i];
    }
    for (int i = 0; i <  length_of_list; i++)
    {   
        !(random_list[i]%2)?even_sum +=random_list[i]:odd_mul *=random_list[i];
        
    }
    cout << "The summer of even numbers = " << even_sum << endl;
    cout << "The mutlipling of odd numbers = " << odd_mul << endl;
    cout << "The difference = " << even_sum - odd_mul << endl;
    return 0;
 }
