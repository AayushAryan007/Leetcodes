class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        vector<int> ans;
        
        int m=mat.size();
        int n=mat[0].size();
        
        int top=0, left=0, bottom=m-1, right=n-1;
        
        while(left<=right and top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            } top++;
            
            for(int i=top;i<=bottom;i++){
                ans.push_back(mat[i][right]);
                
            } right--;
            
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                    
                }
                left++;
            }
        }
        
        return ans;
    }
};