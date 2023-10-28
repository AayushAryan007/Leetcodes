class Solution {
public:
    int myAtoi(string s) {
        int flag = 1;
        int ans = 0;
        int l = s.length();
        int i = 0;

        // Skip leading whitespaces
        while (i < l && isspace(s[i])) {
            i++;
        }

        // Check for an optional sign
        if (i < l && (s[i] == '-' || s[i] == '+')) {
            flag = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < l && isdigit(s[i])) {
            int digit = s[i] - '0';
            // Check for overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return (flag == 1) ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + digit;
            i++;
        }

        return ans * flag;
    }
};





