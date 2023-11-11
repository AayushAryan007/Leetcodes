class Solution {
public:
 long long calculateCombination(int x) {
    return 1LL * x * (x - 1) / 2;
}

long long distributeCandies(int n, int limit) {
   
    if (n > 3 * limit) {
        return 0;
    }

    long long ans = calculateCombination(n + 2);

  
    
    
    if (n > limit) {
        ans -= 3 * calculateCombination(n - limit + 1);
    }

  
    if (n - 2 >= 2 * limit) {
        ans += 3 * calculateCombination(n - 2 * limit);
    }

 
    return ans;
}

};