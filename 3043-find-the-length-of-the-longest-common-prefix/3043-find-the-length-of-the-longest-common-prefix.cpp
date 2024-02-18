#include <vector>
#include <unordered_set>
#include <iostream>

class Solution {
public:
    int longestCommonPrefix(std::vector<int>& arr1, std::vector<int>& arr2) {
        std::unordered_set<std::string> prefixes;

        // Build the set of unique prefixes for arr1
        for (int num : arr1) {
            std::string str = std::to_string(num);
            for (int i = 1; i <= str.length(); ++i) {
                prefixes.insert(str.substr(0, i));
            }
        }

        int maxLen = 0;

        // Check for the longest common prefix in arr2 using the set
        for (int num : arr2) {
            std::string str = std::to_string(num);
            for (int i = 1; i <= str.length(); ++i) {
                if (prefixes.count(str.substr(0, i))) {
                    maxLen = std::max(maxLen, i);
                } else {
                    break;
                }
            }
        }

        return maxLen;
    }
};



// class Solution {
// public:
//     int longestCommonPrefix(std::vector<int>& arr1, std::vector<int>& arr2) {
//         std::sort(arr1.begin(), arr1.end());
//         std::sort(arr2.begin(), arr2.end());
//         int longestPrefixLength = 0;

//         for (int i = 0; i < arr1.size(); ++i) {
//             for (int j = 0; j < arr2.size(); ++j) {
//                 // Extract the first digit of each integer
//                 int firstDigitArr1 = getFirstDigit(arr1[i]);
//                 int firstDigitArr2 = getFirstDigit(arr2[j]);

//                 if (firstDigitArr1 == firstDigitArr2) {
//                     std::string str1 = std::to_string(arr1[i]);
//                     std::string str2 = std::to_string(arr2[j]);

//                     int prefixLength = findCommonPrefixLength(str1, str2);
//                     longestPrefixLength = std::max(longestPrefixLength, prefixLength);
//                 } else {
//                     break;
//                 }
//             }
//         }

//         return longestPrefixLength;
//     }

// private:
//     int getFirstDigit(int num) {
//         while (num >= 10) {
//             num /= 10;
//         }
//         return num;
//     }

//     int findCommonPrefixLength(const std::string& str1, const std::string& str2) {
//         int minLength = std::min(str1.length(), str2.length());
//         int prefixLength = 0;

//         for (int i = 0; i < minLength; ++i) {
//             if (str1[i] == str2[i]) {
//                 ++prefixLength;
//             } else {
//                 break;
//             }
//         }

//         return prefixLength;
//     }
// };