class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
       bool flag=false;
        int ce=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
            {ce++;
            if(ce>=2)
                flag=true;
            }
        }
        return flag;
    }
};