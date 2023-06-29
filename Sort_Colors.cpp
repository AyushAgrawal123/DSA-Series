class Solution
{
    public:
    void sort012(int a[], int n)
    {
         int low=0,med=0,high=n-1;
    while(med<=high){
        if(a[med]==0){
            swap(a[low++],a[med++]);
        }
        else if(a[med]==1){
            med++;
        }
        else {
            swap(a[med],a[high--]);
            
        }
    }
        
    }
    
};
