class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        
        map<int,int> mp;
        int maxi=0;
        for(const auto i:nums){
            mp[i]++;
            maxi=max(maxi,mp[i]);
        }
        
        
        for(const auto pair:mp){
            if(pair.second==maxi){
                ans+=maxi;
            }
        }
        return ans;
    }
};