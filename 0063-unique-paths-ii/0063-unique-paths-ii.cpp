class Solution {
public:
    
   int f(int left,int up,vector<vector<int>> &Grid,vector<vector<int>>& dp){
          if (left < 0 || up < 0) return 0;
        if (dp[left][up] != -1) return dp[left][up];
        if (Grid[left][up] == 1) return 0;
        if (left == 0 && up == 0) return 1;
       
       int i=f(left-1,up,Grid,dp);
       int j=f(left,up-1,Grid,dp);
       
       return dp[left][up]=i+j;
       
   }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        
        int m=Grid.size();
        int n=Grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return f(m-1,n-1,Grid,dp);
    }
};