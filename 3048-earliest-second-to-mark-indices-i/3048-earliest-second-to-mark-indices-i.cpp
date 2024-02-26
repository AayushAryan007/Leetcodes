class Solution {
public:
    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
         int n=nums.size(), m=changeIndices.size();
        vector<int> cizb = changeIndices;
        for(auto& el : cizb) el--;
        
        int low=0,high=m-1, ans=-1;
        
        while(low<=high){
            int mid=(low+high) /2;
            
            if(isPossible(nums,cizb , mid)){
                ans=mid;
                high=mid-1;
                
            }
            else low=mid+1;
            
        }
        return ans==-1?-1 :ans+1; 
    }
    
    bool isPossible(vector<int> & nums, vector<int> & cizb, int s){
        int n=nums.size();
        vector<int> last(n,-1);
        for(int i=0;i<=s;i++){
            last[cizb[i]]=i;
            
        }
        int completed=0, power=0;
        for(int i=0;i<=s;i++){
            if(i==last[cizb[i]]){
                if(nums[cizb[i]]>power) return false;
                power-=nums[cizb[i]];
                completed++;
            }
            else power++;
        }
         return completed==n;
        
    }
};