class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       int mini=nums[0];
        int ans=-1;
        for(int i=1;i<nums.size();i++){
            ans=max(ans,nums[i]-mini);
            
            mini=min(mini,nums[i]);
        }
        
        return ans==0?-1:ans;
    }
};
// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         int minnum=INT_MAX,maxnum=INT_MIN;
//         int minind=0;
//         int l=nums.size();
        
//         for(int i=0;i<l;i++)
//         {
//             if(nums[i]<minnum)
//               {  minnum=nums[i];
//                   minind=i;
//               }
            
//         }
//         if(minind==l-1)
//             return -1;
        
//         for(int j=minind;j<l;j++)
//         {
//             if(nums[j]>maxnum)
//             {
//                 maxnum=nums[j];
//             }
//         }
        
//         return maxnum-minnum;
//     }
// };