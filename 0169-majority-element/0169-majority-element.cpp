class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cur = 1, maxi = 1, majority_element = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                cur++;
                if (cur > maxi) {
                    maxi = cur;
                    majority_element = nums[i];
                }
                if (maxi > n / 2) return majority_element;
            } else {
                cur = 1;
            }
        }

        return majority_element;
    }
};