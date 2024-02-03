class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        if(nums[0]!=0){
            return 0;
        }
        int i;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==2){
                return nums[i]-1;
            }
        }
       return n;
    }
};