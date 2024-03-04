class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        
        int n=nums.size();
        
        int calc= int(n/3)+1;
        vector<int> ls;
        for(int i=0;i<n;i++){
            
            mp[nums[i]]++;
            if(mp[nums[i]]==calc){
                ls.push_back(nums[i]);
            }
            if(ls.size()==2) break;
        }
        return ls;
    }
};