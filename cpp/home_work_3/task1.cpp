#include <iostream>
using namespace std;
int main() {
    int arr[8] {3, 7, 15, 23, 27, 34, 56, 76};
    int begin = 0;
    int find = 8;
    int end = sizeof(arr)/sizeof(int);
    int mid = ( begin + end ) / 2;
    while (begin <= mid){
        if( arr[mid] == find ) {
            cout <<"index = " << mid;
            return 0;
        }
        if(find > arr[mid] ){
            begin = mid+1;
        } else {
            end = mid-1;
        }
        mid = ( begin + end ) / 2;
        
    }
    cout << -1 << endl;
    return 0;
}
