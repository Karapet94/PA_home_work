#include <iostream>
using namespace std;
int main(){
	int arr[10] {2, 34, 57, 64, 55, 77, 98, 12, 35, 17};
	int count = 0;
	for(int i : arr)
	{
		if(i % 2 == 1)
		{
			++count;
		}
	}
	int arr_odd[count];
	count = 0;
	for(int i : arr)
	{
		if(i % 2 == 1)
		{
			arr_odd[count] = i;
			++count;
		}
	}
	for (auto i : arr_odd)
		cout << i << " ";
	cout << endl;
}	
