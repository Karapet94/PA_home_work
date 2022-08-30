#include <iostream>
 using namespace std;
 
 int main()
 {
    int count = 0;
    int random_list[5];
    cout << "Please fill list by 5 inetgers  : " << endl;
    
    int length_of_list = sizeof(random_list) / sizeof(int);
    for (int i = 0; i <  length_of_list; i++)
    {
       cin >> random_list[i];
    }
    for (int i = 1; i <  length_of_list; i++)
    {
      if (!(random_list[i] % i)) {
          count++;
          
      }
    }
    cout << "First index = 0 ,so we cant use int % 0" << endl;
    cout << "The answer is count = " << count << endl;
    return 0;
 }
