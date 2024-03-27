class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0, prod=1, ans=0;
        int j=0;
        while(j<n){
            prod*=nums[j];
            
            while(prod>=k and i<=j){
                prod/=nums[i];
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
        
    }
};