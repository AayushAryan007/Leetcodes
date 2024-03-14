class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n=nums.size();
        
        map<int,int> mp;
        int presum=0, count=0;
        mp[0]=1;
        
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int remove=presum-k;
            count+=mp[remove];
            mp[presum]++;
        }
        
     return count;
    }
};