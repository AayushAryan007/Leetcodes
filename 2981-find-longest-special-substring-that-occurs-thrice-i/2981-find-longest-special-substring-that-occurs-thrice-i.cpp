class Solution {
public:
    int maximumLength(std::string s) {
        int result = -1, count = 1;
        std::unordered_map<std::string, int> freqMap;

        std::string subString1 = "";
        subString1 += s[0];
        std::string subString2 = "", subString3 = "";
        char currentChar = s[0];
        freqMap[subString1]++;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == currentChar) {
                count++;
                if (count >= 2) {
                    subString2 += s[i];
                    freqMap[subString2]++;
                }
                if (count >= 3) {
                    subString3 += s[i];
                    freqMap[subString3]++;
                }
                subString1 += s[i];
            } else {
                currentChar = s[i];
                count = 1;

                subString1 = "";
                subString2 = "";
                subString3 = "";
                subString1 += s[i];

                result = std::max(result, count - 2);
            }
            freqMap[subString1]++;
        }

        result = std::max(result, count - 2);

        for (auto &entry : freqMap) {
            if (entry.second >= 3) {
                int len = entry.first.size();
                result = std::max(result, len);
            }
        }

        return (result > 0) ? result : -1;
    }
};