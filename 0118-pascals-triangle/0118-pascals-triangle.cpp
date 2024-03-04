class Solution {
public:
    
    int nCr(int n,int r){
        long long res=1;
        
        for(int i=0;i<r;i++){
            res= res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
    
    void pascal(vector<vector<int>>&triangle , int r){
        vector<int> row;
        for(int c=1;c<=r;c++){
            row.push_back(nCr(r-1,c-1));
        }
        triangle.push_back(row);
    }
    
    vector<vector<int>> generate(int n) {
        vector<vector<int>> triangle;
        
        for(int i=1;i<=n;i++){
            pascal(triangle,i);
        }
        
        return triangle;
    }
};