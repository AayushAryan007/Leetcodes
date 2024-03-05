class Solution {
public:
    int minimumLength(string s) {
        
        int n=s.size();
        int i=0, j=n-1;
        

        
        while(i<j and s[i]==s[j]){
                    char c=s[i];
        
              while(i<j  and s[i]==c){
            i++;
            
        }
            while(i<=j and s[j]==c){
                j--;
            }
        }
       return j-i+1;
    }
};