#include <iostream>
using namespace std;

int main()
{
	int arr[5] {3,5,7,9,2};
	int *p = arr;
	cout << "Fisrt element is " << *p << endl;
	int length = sizeof(arr) / sizeof(int);
	for(int i = 0; i < length; i++)
	{
		cout << *( p + i ) << endl;
	}
}	
