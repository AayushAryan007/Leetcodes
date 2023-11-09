class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(n==1) return *min_element(matrix[0].begin(),matrix[0].end());
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    matrix[i][j]=matrix[i][j]+min(matrix[i-1][j],matrix[i-1][j+1]);
                }
                else if(j==m-1){
                    matrix[i][j]=matrix[i][j]+min(matrix[i-1][j],matrix[i-1][j-1]);
                }
                else{
                    matrix[i][j]=matrix[i][j]+min(matrix[i-1][j],min(matrix[i-1][j+1],matrix[i-1][j-1]));
                }
            }
        }
        return *min_element(matrix[n-1].begin(),matrix[n-1].end());
    }
};


// class Solution {
// public:
    
//     int sol(int i, int j,int n,vector<vector<int>>&matrix,vector<vector<int>>&dp ){
       
//         if(j<0 || j>=n) return 1e9;
        
//         if(i==0) return matrix[0][j];
//          if(dp[i][j]!=-1) 
//             return dp[i][j];
        
//         int up=matrix[i][j]+sol(i-1,j,n,matrix,dp);
//         int leftTop=matrix[i][j]+sol(i-1,j-1,n,matrix,dp);
//         int rightTop=matrix[i][j]+sol(i-1,j+1,n,matrix,dp);
        
//         return dp[i][j]=min(up,(min(leftTop,rightTop)));
//     }
    
   
    
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//        int n=matrix.size();
        
//         vector<vector<int>>dp(n,vector<int>(n,-1));
        
//         int result=INT_MAX;
//         for(int k=0;k<n;k++){
//             int g=sol(n-1,k,n,matrix,dp);
//            result=min(result,g) ;
//         }
//         return result;
//     }
// };