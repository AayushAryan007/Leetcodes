class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n), suff(n);
        
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]*nums[i];
        }
        
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i];
        }
        
        
         vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int leftProd = (i > 0) ? pref[i - 1] : 1;
            int rightProd = (i < n - 1) ? suff[i + 1] : 1;
            ans[i] = leftProd * rightProd;
        }
        
        return ans;
    }
};