class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int beg=0; 
        int last=0;
        int flag=0;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]==target)
            {
                if(flag==0)
                {
                    flag=1;
                    last=i;
                    beg=i;
                }
                else if(flag==1)
                {
                   last=i;
                    
                }
                    
            }
            
            else if(nums[i]!=target){
                if(flag==1)
                   {
                      break;}
                
                
            }
        }
        
        if(flag==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else if(flag==1)
        {
            ans.push_back(beg);
            ans.push_back(last);
        }
        
        
        return ans;
    }
};