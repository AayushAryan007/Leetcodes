class Solution {
public:
  int jump(vector<int>& nums) {
    int res=0;  // Initialize the result (number of jumps) to 0.
    int l=0, r=0;  // Initialize the left and right boundaries for the current jump.

    while(r < nums.size()-1) {  // Continue until the right boundary reaches the last index.
        int far = 0;  // Initialize a variable to track the farthest position reachable in the current jump.

        // Iterate through the elements in the current jump range [l, r].
        for(int i = l; i <= r; i++) {
            far = max(far, i + nums[i]);  // Update the farthest reachable position.
        }

        l = r + 1;  // Move the left boundary to the position after the current jump range.
        r = far;  // Update the right boundary to the farthest reachable position.
        res += 1;  // Increment the result (number of jumps) for each jump made.
    }

    return res;  // Return the minimum number of jumps.
        
    }
};