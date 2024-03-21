class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, h = n - 1;
        
        // Handle edge case when array size is 1
        if (n == 1) {
            return 0;
        }
        
        int mid;
        while (l <= h) {
            mid = l + (h - l) / 2;
            
            // Check if mid is a peak element
            if ((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == n - 1 || nums[mid] > nums[mid + 1])) {
                return mid;
            }
            
            // If nums[mid] is not a peak, move towards the peak
            if (mid > 0 && nums[mid - 1] > nums[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        // This line should never be reached if a peak element exists
        return -1;
    }
};