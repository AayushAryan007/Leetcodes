class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        long long pref=nums[0]+nums[1];
        
        long long ans=0;
        
        for(int i=2;i<nums.size();i++){
            if(pref>nums[i]){
                ans=max(ans,pref+nums[i]);
            }
            pref+=nums[i];
        }
        
        return (ans==0)? -1: ans;
    }
};