class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int result = 0;

        for (int i = 0; i < 32; ++i) {
            int count = 0;
            int mask = 1 << i;

            for (int num : nums) {
                if (num & mask) {
                    count += 1;
                }
            }

            if (count >= k) {
                result |= mask;
            }
        }

        return result;
    }
};
