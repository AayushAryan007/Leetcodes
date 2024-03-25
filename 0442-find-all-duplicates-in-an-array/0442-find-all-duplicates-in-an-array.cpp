class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        
        int n=nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                ans.push_back(nums[i]);
            }
            else{
                mp[nums[i]]++;
            }
        }
        return ans;
        
    }
};