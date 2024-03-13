class Solution {
public:
    
    int firstocc(vector<int>&nums, int target, int n){
        int l=0, h=n-1;
        
        int ans=-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;
                
            }
            
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        
        return ans;
    }
      int secondocc(vector<int>&nums, int target, int n){
        int l=0, h=n-1;
        
        int ans=-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
                
            }
            
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
          
          return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int first= firstocc(nums,target,n);
        int second = secondocc(nums,target,n);
        
        if(first!=-1 and second!=-1){
            return {first,second};
        }
        else{
            return {-1,-1};
        }
        
    }
};