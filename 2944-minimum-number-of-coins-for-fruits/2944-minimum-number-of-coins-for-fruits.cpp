class Solution {
public:
    
    
    int solve(vector<int>&prices, vector<vector<int>>&dp,int n,int ind,int coins){
        if(ind==n)
            return 0;
        if(ind>n)
            return 1e8;
        if(dp[ind][coins]!=-1)
            return dp[ind][coins];
    
        
        if(coins)//available
        {
            return dp[ind][coins]=min(prices[ind]+solve(prices,dp,n,ind+1,ind+1) ,
                                      solve(prices,dp,n,ind+1,coins-1));
        }
        
      return dp[ind][coins] = prices[ind] + solve(prices, dp, n, ind + 1, ind+1);
    }
    
    
    int minimumCoins(vector<int>& prices) {
          int n=prices.size();
          // vector<int> dp(n,-1);
          vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       
        
          return solve(prices, dp,n,0,0);
        
//         int ans=prices[0];
        
//        for(int i = 0; i < prices.size()-1; i++){
//         if(prices[i+1] > prices[i]){
//         ans += prices[i];
//       }
//        }
//         return ans;
    }
};


