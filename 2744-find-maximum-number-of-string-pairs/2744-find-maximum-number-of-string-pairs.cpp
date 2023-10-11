class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
      map <string, int> mp;
        
        
        for(auto str:words)
        {
            string x=str;
            if(x[0]>x[1])
            {
                char temp=x[0];
                x[0]=x[1];
                x[1]=temp;
                
                mp[x]++;
            }
            else
                mp[x]++;
        }
        int count=0;
        
        for(auto z= mp.begin();z!=mp.end();z++)
        {
            if(z->second==2) count++;
        }
        
        return  count;
    }
};