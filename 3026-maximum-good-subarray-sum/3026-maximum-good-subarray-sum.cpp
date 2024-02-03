class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int targetDifference) {
         std::map<int, std::vector<int>> indexMap;
        std::vector<long long> prefixSum(nums.size());
        prefixSum[0] = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        long long maxSum = LONG_MIN;
        bool isPresent = false;
        long long answer;

        for (int i = 0; i < nums.size(); ++i) {
            if (indexMap.find(nums[i] - targetDifference) != indexMap.end()) {
                isPresent = true;
                for (auto x : indexMap[nums[i] - targetDifference]) {
                    if (x == 0) {
                        answer = prefixSum[i];
                    } else {
                        answer = prefixSum[i] - prefixSum[x - 1];
                    }
                    maxSum = std::max(maxSum, answer);
                }
            }

            if (indexMap.find(nums[i] + targetDifference) != indexMap.end()) {
                isPresent = true;
                for (auto x : indexMap[nums[i] + targetDifference]) {
                    if (x == 0) {
                        answer = prefixSum[i];
                    } else {
                        answer = prefixSum[i] - prefixSum[x - 1];
                    }
                    maxSum = std::max(maxSum, answer);
                }
            }

            indexMap[nums[i]].push_back(i);
        }

        return isPresent ? maxSum : 0;
    }
};