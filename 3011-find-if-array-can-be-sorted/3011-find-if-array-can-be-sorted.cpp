// class Solution {
// public:
//     static bool s(int a, int b) {
//         int countA = __builtin_popcount(a);
//         int countB = __builtin_popcount(b);

//         return countA == countB;
//     }

//     bool canSortArray(vector<int>& nums) {
        
//           int n = nums.size();
//     bool swapped;

//     for (int i = 0; i < n; i++) {
//         swapped = false;

//         for (int j = 0; j < n; j++) {
//             if(i!=j)
//             if (nums[j] > nums[j + 1] && s(nums[i], nums[j])) {
//                 swap(nums[j], nums[j + 1]);
//                 swapped = true;
//             }
//         }

//         // If no two elements were swapped in inner loop, the array is sorted
//         if (!swapped) {
//             break;
//         }
//     }
//        return is_sorted(nums.begin(), nums.end());  
        
// //         int n = nums.size();

// //         for (int i = 0; i < n; i++) {
// //             for (int j = i + 1; j < n; j++) {
// //                 if (nums[j] < nums[i] && s(nums[i], nums[j])) {
// //                     swap(nums[i], nums[j]);

// //                     // Check if nums[i] is greater than or equal to the previous element
// //                     if (i > 0 && nums[i] < nums[i - 1]) {
// //                         return false;
// //                     }
// //                 }
// //             }
// //         }

// //         // Check if the array is sorted after all swaps
// //         return is_sorted(nums.begin(), nums.end());
//     }
// };

#include <vector>

class Solution {
public:
    bool canSortArray(std::vector<int>& nums) {
        int count[101];
        int j = 0, n = nums.size(), k = 0;

        for (int i : nums) {
            count[j++] = setbits(i);
        }

        while (k < nums.size()) {
            for (int i = 1; i < n; i++) {
                if (count[i] == count[i - 1] && nums[i] < nums[i - 1]) {
                    int temp = nums[i];
                    nums[i] = nums[i - 1];
                    nums[i - 1] = temp;
                }
            }

            if (check(nums))
                return true;

            k++;
        }

        return false;
    }

    bool check(std::vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }
        return true;
    }

    int setbits(int num) {
        int c = 0;
        for (int i = 31; i >= 0; i--) {
            if (((num >> i) & 1) == 1)
                c++;
        }
        return c;
    }
};