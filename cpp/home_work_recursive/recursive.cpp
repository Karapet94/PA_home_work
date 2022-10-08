#include <iostream>
using namespace std;
int sum_range(int * begin, int *end);
int main()
{
    const int n = 3;
    int arr[n] {23, 56, 2};
    // const int n = 10;
    // int arr[n] {23, 56, 67, 12, 3, 5, 45, 89, 40, 21};
    int sum ;
    sum = sum_range(arr, (arr + (n)));
    cout << "All elements sum equal to ->   " << sum << endl;
}
int sum_range(int *begin, int *end){
    int sum = 0;
    if(begin != end)
    {
        sum = *begin + sum_range(++begin, end);
    }
    
    return sum;
}
