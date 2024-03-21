class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]) return n-1;
        
        
        
        int l=1, h=n-2;
        
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            
            if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]){
                return mid;
            }
            
            if(nums[mid]>nums[mid-1]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }
};