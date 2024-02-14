class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        
        for(int el : nums){
            if(el>0) pos.push_back(el);
            else neg.push_back(el);
        }
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0) nums[i]=pos[i/2];
            else
                nums[i]=neg[i/2];
        }
        
        return nums;
    }
};