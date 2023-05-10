// User function template for C++

class Solution{
    public:
    bool isSafe(int newx , int newy,vector<vector<int>> &arr, vector<vector<bool>> &vis,int n ){
        if((newx>=0 && newx<n) && (newy>=0 && newy<n) && vis[newx][newy]!=1 && arr[newx][newy]==1){
            return true;
        }
        return false;
    }
    
    void solve(int x,int y,vector<vector<int>> &arr,int n,string path, 
    vector<vector<bool>> &vis, vector<string> &ans){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        vis[x][y]=1;
        //down
        if(isSafe( x+1, y,arr,vis,n)){
            solve(x+1,y,arr,n,path+'D',vis,ans);
        }
        
        //left
        if(isSafe( x, y-1,arr,vis,n)){
            solve(x,y-1,arr,n,path+'L',vis,ans);
        }
        // right
        if(isSafe( x, y+1,arr,vis,n)){
            solve(x,y+1,arr,n,path+'R',vis,ans);
        }
        // Up
        if(isSafe( x-1, y,arr,vis,n)){
            solve(x-1,y,arr,n,path+'U',vis,ans);
        }
        vis[x][y]=0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0){
            ans.push_back("-1");
            return ans;
        }
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        string path="";
        
        solve(0,0,m,n,path,visited,ans);
        return ans;
    }
};

    
