class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        
        int ans=nums[0];
        int ind=0;
        int m=INT_MAX;
        for(int i=1;i<n;i++){
            
            if(m>nums[i]){
                    m=min(m,nums[i]);
                ind=i;
            }
        
            
        }
        ans+=m;
        int j=INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i]>=m and i!=ind){
                j=min(j,nums[i]);
            }
        }
        ans+=j;
        
        return ans;
    }
};