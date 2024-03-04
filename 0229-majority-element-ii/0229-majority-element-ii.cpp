class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n=v.size();
        
        int c1=0, c2=0, e1=INT_MIN,e2 = INT_MIN;
        
        
        for(int i=0;i<n;i++){
            if(c1==0 and v[i]!=e2){
                c1=1;
                e1=v[i];
            }
            else if(c2==0 and v[i]!=e1){
                c2=1;
                e2=v[i];
            }
            else if(v[i]==e1) c1++;
            else if(v[i]==e2) c2++;
            else {
                 c1--,c2--;
            }
        }
        
        
        vector<int> ls;
        c1=0,c2=0;
        
        for(int i=0;i<n;i++){
            if(v[i]==e1) c1++;
            if(v[i]==e2) c2++;
        }
        
        
        int mini=int(n/3)+1;
        if(c1>=mini) ls.push_back(e1);
        if(c2>=mini) ls.push_back(e2);
  
        
          return ls;
    }
  
};