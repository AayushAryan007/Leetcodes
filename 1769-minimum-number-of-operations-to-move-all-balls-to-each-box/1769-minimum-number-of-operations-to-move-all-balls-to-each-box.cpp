class Solution {
public:
    vector<int> minOperations(string boxes) {
        int l=boxes.length();
        
        vector<int> vec;
        
        for(int i=0;i<l;i++){
            if(boxes[i]=='1'){
                vec.push_back(i);
            }
        }
        
        vector<int> ans;
       
        for(int i=0;i<l;i++){
            int sum=0;
            for(int j=0;j<vec.size();j++)
            {
                sum+=abs(vec[j]-i);
            }
            
           ans.push_back(sum);
        }
        
        return ans;
    }
};