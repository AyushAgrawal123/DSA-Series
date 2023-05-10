class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code herein
        if(n==1)
        return 1;
        int total_sum=0,sum=0,i;
        for(i=0;i<n;i++){
            total_sum+=a[i];
        }
        for(i=0;i<n;i++){
            total_sum-=a[i];
            if(total_sum==sum)
            return i+1;
            sum+=a[i];
        }
        return -1;
    }

};
