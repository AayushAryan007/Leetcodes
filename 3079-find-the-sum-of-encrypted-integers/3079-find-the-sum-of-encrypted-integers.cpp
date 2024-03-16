
class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum += encrypt(num);
        }
        return sum;
    }
    
    int encrypt(int num) {
        int max_digit = INT_MIN;
        int original_num = num;
        while (num > 0) {
            int digit = num % 10;
            max_digit = max(max_digit, digit);
            num /= 10;
        }

        int encrypted = 0;
        while (original_num > 0) {
            int digit = original_num % 10;
            encrypted = encrypted * 10 + max_digit;
            original_num /= 10;
        }

        return encrypted;
    }
};