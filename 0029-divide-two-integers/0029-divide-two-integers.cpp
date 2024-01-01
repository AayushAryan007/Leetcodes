
// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//       if(dividend==1<<31 and divisor>=-1) return INT_MAX;
        
//         bool sign=(dividend>=0)==(divisor>=0)?true:false;
        
//         dividend=abs(dividend);
//         divisor=abs(divisor);
        
//         int result=0;
//         while(dividend-divisor>=0){
//             int count=0;
//             while(dividend-(divisor<<1<<count)>=0){
//                 count++;
                
//             }
//             result+=1<<count;
//             dividend-=divisor<<count;
//         }
//         return sign?result:-result;
        
//     }
// };

// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if (dividend == INT_MIN && divisor == -1) {
//             return INT_MAX; // Handling edge case to prevent overflow
//         }

//         int isNegative = (dividend > 0) ^ (divisor > 0);
//         long long dvd = labs(dividend);
//         long long dvs = labs(divisor);
//         int result = 0;

//         while (dvd >= dvs) {
//             long long temp = dvs, multiple = 1;
//             while (dvd >= (temp << 1)) {
//                 temp <<= 1;
//                 multiple <<= 1;
//             }
//             dvd -= temp;
//             result += multiple;
//         }

//         return isNegative ? 0-result : result;
//     }
// };
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long dvd = labs(dividend), dvs = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (dvd >= dvs) {
            long temp = dvs, m = 1;
            while (temp << 1 <= dvd) {
                temp <<= 1;
                m <<= 1;
            }
            dvd -= temp;
            ans += m;
        }
        return sign * ans;
    }
};