class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
     std::string result = "";

        // Sort the vector of strings
        std::sort(strs.begin(), strs.end());

        // Get the first and last strings
        std::string first = strs[0];
        std::string last = strs[strs.size() - 1];

        // Start comparing characters
        for (int i = 0; i < first.length(); i++) {
            if (first[i] != last[i])
                break;
            result += first[i];
        }

        return result;
  }
};


/////////////Bruter Force///////////
// class Solution {
//  public:
//   string longestCommonPrefix(vector<string>& strs) {
//     if (strs.empty())
//       return "";

//     for (int i = 0; i < strs[0].length(); ++i)
//       for (int j = 1; j < strs.size(); ++j)
//         if (i == strs[j].length() || strs[j][i] != strs[0][i])
//           return strs[0].substr(0, i);

//     return strs[0];
//   }
// };
