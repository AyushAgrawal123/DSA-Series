class Solution{
public:


int isHappy(int n){
    unordered_map<int,int>mp;
    while(mp.find(n)==mp.end()){
        mp[n]=1;
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum=sum+(digit*digit);
            n=n/10;
        }
        if(sum==1){
            return 1;
        }
    
            n=sum;
        
    }
    return 0;
}
    int nextHappy(int N){
        // code here
        N++;
    while(1){
        if(isHappy(N)){
            return N;
        }
            N++;
    }
    }
};
