class Solution {
public:
    
    
    int check(vector<int>&nums, int mid){
        int n=nums.size();
        int partition=1;
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                partition++;
                sum=nums[i];
            }
        }
        return partition;
        
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        
        
        
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
         int ans=0;
        while(l<=r){
            
            int mid=(l+r)/2;
            
           
            
            if(check(nums,mid)>k){
             //   ans=l;
                l=mid+1;
                
            }
            else{
                r=mid-1;
                
                
            }
        }
        
        return l;
    }
};