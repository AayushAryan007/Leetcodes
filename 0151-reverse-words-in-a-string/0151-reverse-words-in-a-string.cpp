class Solution {
public:
    string reverseWords(string s) {
        int i=0, n=s.size();
        
        string temp="";
        string ans="";
        
        while(i<n){
            
            if(s[i]!=' '){
               temp+=s[i];
            }
            else if(s[i]==' '){
                if(ans==""){
                    ans=temp;
                  
                }
                else if(ans!=""){
                    if(temp!="")
                    ans=temp+" "+ans;
                    
                }
                
               temp="";
            }
            
            i++;
            
        }
        
        if(temp!=""){
            if(ans!=""){
                ans=temp+" "+ans;
            }
            else{
                ans=temp;
            }
        }
        
        return ans;
    }
};