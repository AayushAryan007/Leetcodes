class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        
        vector<int> ans;
        
        for(auto i:nums){
            nums[abs(i)-1]*=-1;
        }
        
        
        for(auto i: nums){
            if(nums[abs(i)-1]>0) ans.push_back(abs(i));
            
            nums[abs(i)-1]*=-1;
            
        }
        
        return ans;
        
//         map<int,int> mp;
        
//         int n=nums.size();
//         vector<int> ans;
        
//         for(int i=0;i<n;i++){
//             if(mp.find(nums[i])!=mp.end()){
//                 ans.push_back(nums[i]);
//             }
//             else{
//                 mp[nums[i]]++;
//             }
//         }
//         return ans;
        
    }
};