#include <iostream>
using namespace std;
int main(){
	int arr[10] {44, 56, 23 , 90, 23, 85, 34, 57, 35, 34};
	int max1 , max2, max3;
		max1 = max2 = max3 = arr[0];
		
	for(int i = 1; i < 10; ++i)
	{
		if(max1 < arr[i]  )
		{	
			max1 = arr[i];	
		}else if(max2 < arr[i])
			{
				max2 = arr[i];
			}else if(max3 < arr[i])
				{
					max3 = arr[i];
				}		
	}
	cout << "max3 = " << max3 << endl; 
	return 0;
}
