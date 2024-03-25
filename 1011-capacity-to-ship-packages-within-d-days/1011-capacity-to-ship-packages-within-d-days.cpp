class Solution {
public:
    
    int check(vector<int>& nums, int mid){
        int days=1;
        int capacity=0;
        int n=nums.size();
        
        for(auto i:nums){
            if(capacity+i > mid){
                days+=1;
                capacity=i;
            }
            else{
                capacity+=i;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        
        int n=nums.size();
        int h=0, l=INT_MIN;
        
        for(int i=0;i<n;i++){
            h+=nums[i];
            l=max(l,nums[i]);
        }
        
        int ans=-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            
            int curdays=check(nums,mid);
            if(curdays<=days){
                // ans=h;
                h=mid-1;
                
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }
};