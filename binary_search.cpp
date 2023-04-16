#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int mid = s+e/2;
    while(s<e){
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            s = mid +1;
        }
        else{
            e = mid-1;
        }
         mid = s+e/2;
    }

    return -1;
}
int main(){

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = binarySearch(arr,n,5);
    cout << "Element found at index no :- " << ans << endl ;
    return 0;
}
