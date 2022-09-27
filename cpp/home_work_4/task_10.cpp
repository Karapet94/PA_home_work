#include <iostream>
using namespace std;
int main(){
	int arr[10] {2, 34, 57, 64, 55, 77, 98, 12, 35, 17};
	int length = 10;
	int count, count_odd;
	count = count_odd = 0;
	for(int i = 0; i < length ; ++i)
	{
		if(arr[i] % 2 == 1)
		{	++count_odd;
			while(arr[length - count_odd] % 2 == 1)
				{
					++count_odd;
				}
			arr[i] = arr[i] + arr[length - count_odd];
			arr[length - count_odd] = arr[i] - arr[length - count_odd];
			arr[i] = arr[i] - arr[length - count_odd];
		}
	}
	for(auto i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
}	
