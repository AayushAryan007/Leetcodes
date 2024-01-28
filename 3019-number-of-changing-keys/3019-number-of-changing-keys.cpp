class Solution {
public:
    int countKeyChanges(string s) {
          int changes = 0;

    for (int i = 1; i < s.length(); ++i) {
        char current = tolower(s[i]);
        char previous = tolower(s[i - 1]);

        if (current != previous) {
            changes++;
        }
    }

    return changes;
    }
};