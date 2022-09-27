#include <iostream>
using namespace std;

int main()
{
	char arr[13] = "CheeseBurger";
	int max, min, count = 0;
	max = min = arr[0];
	for(int i = 1;  i < 12; i++)
	{
		if(arr[i] > max)
			{
				max = arr[i];
			}
		 
		if(arr[i] < min)
			{
				min = arr[i];
			}
		if(arr[i]==97 || arr[i]==101 || arr[i]==105 || arr[i]==111 || arr[i]==117 ||  arr[i]==65 || arr[i]==69  || arr[i]==73  || arr[i]==79  || arr[i]==85)
			{
				++count;	
			}
	}
	for(int i = 11; i >= 0; --i)
	{
		cout << arr[i];
	}
	 int tmp;		
	for(int i = 0; i < 12/2; ++i)
	{
		tmp = arr[i];
		arr[i] = arr[11 - i];
		arr[11 -i] = tmp;	
	}	
	cout << endl;
	cout << "max is " << max << endl;
	cout << "min is " << min << endl;
	cout << "volwes count is " << count << endl;
	cout << "Reversed array is below: " << endl;
	for(int i = 0;  i <= 11; i++)
	{	if(arr[i] >= 97)
		{	
			arr[i] = arr[i] - 32;
		}
		cout << arr[i];
	}
	cout << endl;
}
