class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
          int c0=0, c1=0;
        
        for(auto i:students){
           if(i&1) c1++;
            else c0++;
        }
        
        
        for(auto i:sandwiches){
            if(i==0 and c0==0) return c1;
            if(i==1 and c1==0) return c0;
            
            if(i==0) c0--;
            else c1--;
        }
        
        return 0;
    }
};