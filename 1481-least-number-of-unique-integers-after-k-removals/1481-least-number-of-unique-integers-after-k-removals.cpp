class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> freq;
        for(auto i:arr) freq[i]++;
        
        vector<int> fv;
        for(auto p:freq) fv.push_back(p.second);
        
        sort(fv.begin(),fv.end());
        
        int removed=0;
        
        for(int i=0;i<fv.size();i++){
            removed+=fv[i];
            if(removed>k) return fv.size()-i;
        }
        return 0;
    }
};