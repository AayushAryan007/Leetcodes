class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        vector<int> dp(n);
        dp[0]=nums[0];
     
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-2]+nums[i], dp[i-1]);
        }
        return dp[n-1];
    }
};
// #include<bits/stdc++.h>
// class Solution {
// public:
    
//     int  sol(vector<int>&nums,vector<int>&dp,int ind){
//         if(ind==0) return 0;
//         if(dp[ind]!=-1) return dp[ind];
        
//         if(nums.size()<2)
//             return nums[0];
        
//         for(int i=2;i<nums.size();i++){
//           dp[i]=max(dp[i-2]+nums[i], dp[i-1]);  
//         }
//     return dp[nums.size()-1];
        
        
//     }
    
    
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> dp(n);
//         memset(dp,-1,sizeof(dp));
//         dp[0]=nums[0];
//         dp[1]=nums[1];
         
//         if(nums.size()==1)
//             return nums[0];
//         return sol(nums,dp,n-1);
//     }
// };