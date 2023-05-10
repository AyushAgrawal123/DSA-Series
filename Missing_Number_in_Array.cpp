// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int asum=n*(n+1)/2,sum=0;
        for(int i=0;i<n-1;i++){
            sum+=array[i];
        }
        return (asum-sum);
    }
};
