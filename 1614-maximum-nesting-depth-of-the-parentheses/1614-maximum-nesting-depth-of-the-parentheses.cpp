class Solution {
public:
    int maxDepth(string s) {
        stack<char> stack;
        int maxDepth = 0;
        int currentDepth = 0;
        
        for (char c : s) {
            if (c == '(') {
                stack.push('(');
                currentDepth++;
                maxDepth = max(maxDepth, currentDepth);
            } else if (c == ')') {
                stack.pop();
                currentDepth--;
            }
        }
        
        return maxDepth;
    }
};