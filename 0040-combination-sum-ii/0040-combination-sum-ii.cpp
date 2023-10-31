
class Solution {
public:
    vector<vector<int>> ans;
    
    void generate(int i,vector<int>&can, int target, vector<int>& subvec){
   
           if(target==0){
            ans.push_back(subvec);
        
            return;
            }
        
        for(int j=i;j<can.size();j++){
            if(j>i and can[j]==can[j-1]) continue;
            if(can[j]>target) break;
            subvec.push_back(can[j]);
            generate(j+1,can,target-can[j],subvec);
            subvec.pop_back();
        }
        
//         if(can[i]<=target){
//             subvec.push_back(can[i]);
//             generate(i+1,can,target-can[i], subvec);
//             subvec.pop_back();
//         }
//          generate(i+1,can,target,subvec);
        
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> subvec;
        sort(candidates.begin(),candidates.end());
        generate(0,candidates, target,subvec);
        return ans;
        
    }
};