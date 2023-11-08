class Solution {
public:
    
    int f(int left,int up, vector<vector<int>>&dp){
        if(dp[left][up]!=-1) return dp[left][up];
        
        if(left==0 or up==0) return 1;
        if(left<0 || up<0) return 0;
        
        int j=f(left,up-1,dp);
        int i=f(left-1,up,dp);
        
        return dp[left][up]=i+j;
        
    }
    
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,dp);
    }
};