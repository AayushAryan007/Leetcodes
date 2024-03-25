class Solution {
public:
    
    int check(vector<int>& nums, int n, int th, int mid){
        
        int result=0;
        
        for(auto i:nums){
           // result+= ceil(i/mid);
          //  result += (i + mid - 1) / mid; 
            result += ceil((double)(i) / (double)(mid));
        }
        
        return result<=th;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n=nums.size();
        
        
        int l=1, r=0;
        
        for(auto i:nums){
            r=max(r, i);
        }
          int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
          
            
            if(check(nums,n,threshold, mid)){
                ans=mid;
                r=mid-1;
                
            }
            else{
                l=mid+1;
            
            }
        }
        return ans;
        
        
    }
};