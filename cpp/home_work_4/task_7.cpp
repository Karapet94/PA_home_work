#include <iostream>
using namespace std;
int main(){
	int arr[10] {2, 34, 57, 64, 55, 77, 98, 12, 35, 17};
	for(int i : arr)
	{
		if(i % 2 == 0)
		{
			cout << i << endl;
		}
	}
}	
