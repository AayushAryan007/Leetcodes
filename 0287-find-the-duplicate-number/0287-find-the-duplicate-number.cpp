class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        map<int,int>mp;
        
        for(auto i:nums){
            if(mp.find(i)!=mp.end()){
                return i;
            }
            else mp[i]++;
        }
        
        return -1;
    }
};