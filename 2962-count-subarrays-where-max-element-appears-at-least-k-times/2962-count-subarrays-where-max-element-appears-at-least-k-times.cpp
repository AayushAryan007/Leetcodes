class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long i = 0, j = 0;
        int maxi = 0;
        for (auto num : nums) {
            maxi = max(maxi, num);
        }
        int n = nums.size();
        long long ans = 0;
        unordered_map<int, int> mp;
        while (j < n) {
            mp[nums[j]]++;
            while (mp[maxi] >= k && i <= j) {
                ans += (n - j);
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};