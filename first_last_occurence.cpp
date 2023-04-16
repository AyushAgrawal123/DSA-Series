#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int ans;
    int mid = (s+e)/2;
    while(s<e){
        if(arr[mid] == key){
            ans= mid;
            e=mid-1;
        }
        
        if(arr[mid] < key){
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        int mid = (s+e)/2;
    }
    
    return ans;
}


int binarySearch1(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int ans1;
    int mid = (e - s)/2;
    while(s<e){
        if(arr[mid] == key){
            ans1= mid;
            s=mid+1;
        }
        
        if(arr[mid] < key){
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        int mid = (e - s)/2;
    }
    
    return ans1;
}
int main(){
   
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = binarySearch(arr,n,7);
    cout << "first ocurence  " << ans << endl ;
    int ans1 = binarySearch1(arr,n,7);
    cout << "Last occurence" << ans1 << endl ;
}