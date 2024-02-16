class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ans;
    
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int more=target-a;
            if(ans.find(more)!=ans.end()){
                return {ans[more],i};
            }
            ans[a]=i;
        }
        return {-1,-1};
    }
};//