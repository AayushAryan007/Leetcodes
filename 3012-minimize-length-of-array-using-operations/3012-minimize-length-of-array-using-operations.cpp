class Solution {
public:
    int minimumArrayLength(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        
        if (n > 2 && nums[0] != nums[1]) {
            return 1;
        }

        int d = nums[0]; // greatest common divisor
        for (int i : nums) {
            d = gcd(d, i);
        }

        int count = 0;
        for (int i : nums) {
            if (i == d) {
                count++;
            }
        }

        return std::max(1, (count + 1) / 2);
    }

private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};