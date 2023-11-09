class Solution {
public:
    
    int sol(int i,int j, int n, vector<vector<int>>&triangle,vector<vector<int>>&dp){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==n-1) return triangle[i][j];
        
        int down=triangle[i][j]+sol(i+1,j,n,triangle,dp);
        int side=triangle[i][j]+sol(i+1,j+1,n,triangle,dp);
        
        
        return  dp[i][j]=min(down,side);
    }
        
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return sol(0,0,n,triangle,dp);
    }
};