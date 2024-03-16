class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size();
        vector<int> pref(n+1,0);
        map<int,int> mp;
        
        int maxi=0;
        mp[0]=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            pref[i+1]=pref[i]-1;
            else
                pref[i+1]=pref[i]+1;
            
            if(mp.find(pref[i+1]) != mp.end()){
                maxi=max(maxi,i+1-mp[pref[i+1]]);
            }
            
            else
                mp[pref[i+1]]=i+1;
            
        }
        
        return maxi;
        
    }
};