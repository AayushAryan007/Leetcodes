class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        
        
        int l=0, h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            
            //left part sorted
            if(nums[l]<= nums[mid]){
                ans=min(ans,nums[l]);
                
                l=mid+1;
            }
            
            //right part sorted
            else{
                ans=min(ans,nums[mid]);
                
                h=mid-1;
                
            }
                
        }
        
        return ans;
    }
};