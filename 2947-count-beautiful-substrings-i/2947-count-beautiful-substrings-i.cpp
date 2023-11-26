
class Solution {
public:
    bool checkvow(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    int beautifulSubstrings(string s, int k) {
        int n = s.length();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int v = 0,c = 0;

            for (int j = i; j < n; ++j) {
                if ( checkvow(s[j])) {
                    v++;
                } else {
                    c++;
                }

                if (v ==c && (v * c) % k == 0) {
                    count++;
                }
            }
        }

        return count;
    }
};