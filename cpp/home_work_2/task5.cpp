#include <iostream>
 using namespace std;
 
 int main()
 {
    int myArray[5];;
    cout << "Please fill list by 5 inetgers  : " << endl;
    
    int length_of_list = sizeof(myArray) / sizeof(int);
    for (int i = 0; i <  length_of_list; i++)
    {
       cin >> myArray[i];
    }
   
    for (int i = 0; i <  length_of_list; i++)
    {   
        for (int j = i + 1; j <  length_of_list; j++)
        {
            int max = myArray[i];
            if (max > myArray[j] )
            {
                myArray[i] = myArray[j];
                myArray[j] = max;
            }
            
        }
        
    }
    cout  << "This is sorted array" << endl;
    for (int i = 0; i <  length_of_list; i++)
    {
       cout  << myArray[i] << endl;
    }
    
    return 0;
 }
