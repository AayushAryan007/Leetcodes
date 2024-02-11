class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
          int n = nums.size();
        int m = pattern.size();
        int count = 0;

        for (int i = 0; i <= n - m; i++) {
            bool match = true;

            for (int k = 0; k < m; k++) {
                // Check array bounds to avoid heap-buffer-overflow
                if (i + k >= n || i + k + 1 >= n) {
                    match = false;
                    break;
                }

                if (pattern[k] == 1 && nums[i + k + 1] <= nums[i + k]) {
                    match = false;
                    break;
                } else if (pattern[k] == 0 && nums[i + k + 1] != nums[i + k]) {
                    match = false;
                    break;
                } else if (pattern[k] == -1 && nums[i + k + 1] >= nums[i + k]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                count++;
            }
        }

        return count;
    }
};