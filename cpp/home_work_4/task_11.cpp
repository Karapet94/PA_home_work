#include <iostream>
#include <iomanip>
using namespace std;
bool is_same_arr1(int *p1, int *p2, int n)
{
	for(int i = 0; i < n; ++i)
	{
		if(*(p1 + i) != *(p2 + i))
		{
			return false;
		}	
	}
	return true;
} 
int main()
{	
	int ln = 5;
	int arr1[ln] {2, 45, 67, 3, 8};
	int arr2[ln] {2, 45, 67, 3, 8};
	int arr3[ln] {2, 45, 67, 7, 8};
	int *p1 = arr1;
	int *p2 = arr2;
	int *p3 = arr3;
	cout << "Is arr1 and arr2 same ---> " << boolalpha << is_same_arr1(p1, p2, ln) <<endl; 
	cout << "Is arr1 and arr3 same ---> " << boolalpha << is_same_arr1(p1, p3, ln) <<endl; 
return 0;
}
