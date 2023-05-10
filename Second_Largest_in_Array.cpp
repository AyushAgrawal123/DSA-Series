//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    if(n<2){
	        return -1;
	    }
	    bool flag =false;
	    int max=arr[0];
	    int smax=-1;
	    for (int i=1;i<n;i++)
	    {
	        if(arr[i]>max){
	            smax=max;
	            max=arr[i];
	            flag=true;
	        }
	        else if(arr[i]>smax && arr[i]!=max){
	            smax=arr[i];
	            flag=true;
	        }
	    }
	    if(flag){
	        return smax;
	    }
	    else{
	        return -1;
	    }
	}
};
