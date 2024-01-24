class Solution {
public:
    int leastInterval(vector<char>& task, int n) {
        vector<int> freq(26);
        for(auto ch:task){
            freq[ch-'A']++;
        }
        sort(freq.rbegin(),freq.rend());
        
        int ideal=(freq[0]-1)*n;
        for(int i=1;i<freq.size();i++){
            ideal=ideal-min(freq[0]-1,freq[i]);
        }
        return task.size()+max(0,ideal);
    }
};