#include <iostream>
using namespace std;
int getIndex(int* arr, int find, int mid, int end, int begin){
    if( arr[mid] == find ) {
            return mid;
        }
        if(find > arr[mid] ){
            begin = mid+1;
        } else {
            end = mid-1;
        }
        if (begin >= end){
            return -1;
        }
        mid = ( begin + end ) / 2;
        int result = getIndex(arr, find, mid, end, begin);
        return result;
}

int main() {
    int arr[8] {3, 7, 15, 23, 27, 34, 56, 76};
    int begin = 0;
    int find = 56;
    int end = sizeof(arr)/sizeof(int);
    int mid = ( begin + end ) / 2;
    int result;
    result = getIndex(arr, find, mid, end, begin);
    cout  << result << endl;
    return 0;
}
