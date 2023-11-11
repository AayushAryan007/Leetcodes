class Solution {
public:
    
    //seriously??????? pattern based and hard???
    long long maxSpending(vector<vector<int>>& v){
        vector<int> amt;
        
        for(long long i=0;i<v.size();i++){
            for(long long j=0;j<v[0].size();j++){
                amt.push_back(v[i][j]);
            }
        }
        
        sort(amt.begin(), amt.end());
        
        long long ans=0, count=1;
        for(long long i=0;i<amt.size();i++){
            ans+=amt[i]*count;
            count++;

        }
        
        return ans;
    }
  
};