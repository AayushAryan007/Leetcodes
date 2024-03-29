class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        int low=1, high=n-1, ans=0;
        
        
        while(low<=high){
            int mid=(low+high)/2;
            int count=0;
            
            for(int i=0;i<n;i++){
                if(mid>=nums[i]){
                    count++;
                }
            }
            
            if(count<=mid){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
            
        }
        return ans;
    }
};
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n=nums.size();
        
//         map<int,int>mp;
        
//         for(auto i:nums){
//             if(mp.find(i)!=mp.end()){
//                 return i;
//             }
//             else mp[i]++;
//         }
        
//         return -1;
//     }
// };