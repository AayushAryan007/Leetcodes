class Solution {
public:
    vector<vector<int>>allsub;
    
    void generate(vector<int>&subset,int i, vector<int>&nums){
        allsub.push_back(subset);
        
        for(int j=i;j<nums.size();j++){
            if(j!=i and nums[j]==nums[j-1]) continue; //wont go further in thsi iteration look conditions
            
            //else
            subset.push_back(nums[j]);
            generate(subset,j+1,nums);
            subset.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>empty;
        sort(nums.begin(),nums.end());
        generate(empty,0,nums);
        return allsub;
    }
};