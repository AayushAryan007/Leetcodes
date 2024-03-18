class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        
        int l=0, h=n-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            
            
            if(nums[mid]==target){
                return true;
                
            }
            
            if(nums[l]==nums[mid] and nums[mid]==nums[h]){
                l++;
                h--;
                continue;
            }
            
            //if left part is sorted
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target and target<=nums[mid]){
                    h=mid-1;
                    
                }
                else
                    l=mid+1;
            }
            
            else{
                if(nums[mid+1]<=target and target<=nums[h]){
                    l=mid+1;
                }
                else
                    h=mid-1;
                
            }
        }
        
        return false;
    }
};