#include <iostream>
using namespace std;

int main()
{
	int x {4};
	char ch {'w'};
	float f {3.1};
	int *px = &x;
	char *pch = &ch;
	float *pf = &f;
	cout << px <<endl << ch << endl << pf << endl;
	return 0;
}
