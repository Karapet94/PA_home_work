#include <iostream> 
using namespace std;
    int main()
    {
       int myArray[8];
       cout << "Please fill list by 8 inetgers  : " << endl;
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
       int count = 1;
       for (int i = 0; i <  length_of_list; i++)
       {
            if(myArray[i] == myArray[i+1]){
                count++;
            }
            else  
            {
                cout << myArray[i] << ":" << count << endl ;
                count =1;
            }
       }
       return 0;
    }
