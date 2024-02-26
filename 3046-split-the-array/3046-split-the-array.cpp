class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
         int n = nums.size();
        if (n % 2 != 0) {
            return false; // Array length must be even
        }

        std::sort(nums.begin(), nums.end());

        std::unordered_map<int, int> countMap;
        int half = n / 2;

        for (int i = 0; i < n; ++i) {
            countMap[nums[i]]++;

            if (countMap[nums[i]] > 2) {
                return false; // Element occurs more than twice
            }
        }

        return true;
    }
};