class Solution {
public:
    vector<vector<int>> ans;
    
    void generate(int i,vector<int>&can, int target, vector<int>& subvec){
        if(i==can.size()){
           if(target==0){
            ans.push_back(subvec);
        }
            return;
        }
        
        if(can[i]<=target){
            subvec.push_back(can[i]);
            generate(i,can,target-can[i], subvec);
            subvec.pop_back();
        }
         generate(i+1,can,target,subvec);
        
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> subvec;
        
        generate(0,candidates, target,subvec);
        return ans;
        
    }
};