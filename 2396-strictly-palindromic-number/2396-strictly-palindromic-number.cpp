class Solution {
public:
    
    bool isPalindrome(string &s)
    {
        int i=0, j=s.size()-1;
        
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            string rep="";
            int nn=n;
            
            while(nn){
                rep+=(to_string(nn%i));
                nn=nn/i;
            }
            
            if(!isPalindrome(rep)){
                return false;
            }
           
        } return true;
    }
};