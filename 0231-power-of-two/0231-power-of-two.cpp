class Solution {
public:
   bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false; // 0 and negative numbers are not powers of 2
    }
    return (n & (n - 1)) == 0;
}

};