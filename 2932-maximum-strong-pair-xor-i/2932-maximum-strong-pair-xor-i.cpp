class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
       
               int n = nums.size();
        int result  = 0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
               if(abs(nums[i]-nums[j]) <= min(nums[i], nums[j]))
                {
                    result = nums[i] ^ nums[j];
                    if(maxi < result)
                    {
                        maxi = result;
                    }
                    else
                    {
                        result = maxi;
                    }
                }
            
            }
        }
        
        
        return result;
    }
    
};