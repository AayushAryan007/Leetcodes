class Solution {
public:
    int check(int k, vector<int>& piles) {
        long long int time = 0;
        for (int pile : piles) {
            time += (pile + k - 1) / k; // Rounds up to the nearest integer
        }
        return time;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        // Calculate the sum of all pile sizes
        long long int sumPiles = accumulate(piles.begin(), piles.end(), 0LL);
        
        // Initialize binary search range based on sum and time limit
        int l = (sumPiles + h - 1) / h; // lower bound
        int hi = *max_element(piles.begin(), piles.end()); // upper bound
        
        while (l < hi) {
            int mid = l + (hi - l) / 2;
            int cur = check(mid, piles);
            
            if (cur > h) {
                l = mid + 1;
            } else {
                hi = mid;
            }
        }
        
        return l; // Return the minimum eating speed
    }
};
