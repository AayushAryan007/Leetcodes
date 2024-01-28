class Solution {
private:
    long long getOddCount(int value) {
        return (value + 1) / 2;
    }

    long long getEvenCount(int value) {
        return value / 2;
    }

public:
    long long flowerGame(int x, int y) {
        long long evenCountY = getEvenCount(y);
        long long oddCountX = getOddCount(x);

        long long evenCountX = getEvenCount(x);
        long long oddCountY = getOddCount(y);

        long long pairCount = oddCountX * evenCountY;
        pairCount += evenCountX * oddCountY;  // Fixed typo in variable name

        return pairCount;
    }
    
};