class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1=s1.size(), n2=s2.size(),n3=s3.size();
        
        int n=min(n1,min(n2,n3));
      int  count=0;
        
        if( s1[0]!=s2[0] or s2[0]!=s3[0]){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i] and s2[i]==s3[i]){
                 count++;
                continue;
            }
            else{
               
                break;
            }
        }
      return (n1+n2+n3)-3*count;
        
        
    }
};