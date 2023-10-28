class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<int> un;
            
            for (int j = i; j < n; j++) {
                un.insert(nums[j]);
                result += un.size() * un.size();
             }
        }

        return result;
    }
};