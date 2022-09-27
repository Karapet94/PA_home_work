#include <iostream>
using namespace std;

int main (){
	int arr1[6] {3,4,56,7,8,9};
	int arr2[4] {34,6,57,1};
	int arr1_size, arr2_size, arr3_size;
	arr1_size = sizeof(arr1) / sizeof(int); 
	arr2_size = sizeof(arr2) / sizeof(int); 
	arr3_size = arr1_size + arr2_size; 
	int arr3[arr3_size];
	for(int i = 0; i < arr1_size; ++i)
	{	
		arr3[i] = arr1[i];
	}
	for(int i = 0; i < arr2_size; ++i)
	{	
		arr3[i + arr1_size] = arr2[i];
	}
	for(int i = 0; i < arr3_size; ++i)
	{	
		cout << arr3[i] << endl;
	}

}
