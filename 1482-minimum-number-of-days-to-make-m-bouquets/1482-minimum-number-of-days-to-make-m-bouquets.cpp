class Solution {
public:
    
    int check(vector<int>& bloom, int m, int mid,int k){
        int ans=0;
        int count=0;
        for(auto i:bloom){
            if(i<=mid){
                count++;
            }
            else
            {
                ans+=count/k;
                count=0;
            }
        }
        ans+=count/k;
        
        return ans>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n=bloomDay.size();
        
        int l=INT_MAX, r=INT_MIN;
        
        for(auto i: bloomDay){
            l=min(l,i);
            r=max(i,r);
        }
        
        int ans=-1;
        while(l<=r){
            
            int mid=(l+r)/2;
            
            if(check(bloomDay,m,mid,k)){
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