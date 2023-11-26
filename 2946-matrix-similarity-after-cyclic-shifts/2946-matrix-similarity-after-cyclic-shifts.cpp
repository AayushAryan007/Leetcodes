#include <vector>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> mat2 = mat;

        for (int i = 0; i < m; ++i) {
            if (i % 2 == 0) { // Even indexed row: cyclic left shift
                for (int shift = 0; shift < k; ++shift) {
                    rotate(mat[i].begin(), mat[i].begin() + 1, mat[i].end());
                }
            } else { // Odd indexed row: cyclic right shift
                for (int shift = 0; shift < k; ++shift) {
                    rotate(mat[i].rbegin(), mat[i].rbegin() + 1, mat[i].rend());
                }
            }
        }

        return mat2 == mat;
    }
};
