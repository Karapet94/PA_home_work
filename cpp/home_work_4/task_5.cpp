#include <iostream>
using namespace std;
int main(){
	int arr[10] {44, 56, 23 , 90, 23, 85, 34, 57, 35, 34};
	int min1 , pre_min1;
		pre_min1 = arr[0];
		min1 = arr[0];
	for(int i = 1; i < 10; ++i)
	{
		if(min1 >= arr[i])
		{
			min1 = arr[i];	
		} else if(pre_min1 > arr[i] )
		{
			pre_min1 = arr[i];
		}
	}
	cout << "pre_min1 = " << pre_min1 << endl; 
	cout << "min1 = " << min1 <<endl;
	return 0;
}
