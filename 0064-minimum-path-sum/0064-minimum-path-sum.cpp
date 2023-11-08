class Solution {
public:
    
   int f(int left,int up,vector<vector<int>> &Grid,vector<vector<int>>& dp){
       
        if (left < 0 || up < 0) return 1e9;
        if (left == 0 && up == 0)  return Grid[0][0];
        
        if (dp[left][up] != -1) return dp[left][up];
       int i=Grid[left][up]+f(left-1,up,Grid,dp);
       int j=Grid[left][up]+f(left,up-1,Grid,dp);
       
       return dp[left][up]=min(i,j);
       
   }
    
    
    int minPathSum(vector<vector<int>>& Grid) {
        
        int m=Grid.size();
        int n=Grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return f(m-1,n-1,Grid,dp);
    }
};