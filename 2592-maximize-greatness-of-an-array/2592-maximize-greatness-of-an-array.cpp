class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        
       
        
        int l=nums.size();
        sort(nums.begin(), nums.end());
        int i=0,j=0;
        int count=0;
        while (i<l && j<l)
        {
          if(nums[i]<nums[j])  
              {
              count++;
               i++;
              j++;
               }
            else
                j++;
        }
        return count;
    }
};