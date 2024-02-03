class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Check if sides can form a triangle
        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        }

        // Determine the type of triangle
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        } else if (nums[0] == nums[1] || nums[1] == nums[2]) {
            return "isosceles";
        } else {
            return "scalene";
        } 
    }
};