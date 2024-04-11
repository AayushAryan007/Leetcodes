class Solution {
public:
    string removeKdigits(string nums, int k) {
        int n=nums.size();
        stack<char> s;
        
        for(auto c:nums ){
            while(!s.empty()  and s.top()>c and k>0){
                s.pop();
                k--;
            }
            s.push(c);
        }
        while(k>0){
            s.pop();
            k--;
        }
        
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        
        int endi=0;
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]!='0'){
                endi=i;
                break;
            }
        }
        
        ans=ans.substr(0,endi+1);
        reverse(ans.begin(),ans.end());
        
        if(ans=="") ans="0";
        
        return ans;
    }
};