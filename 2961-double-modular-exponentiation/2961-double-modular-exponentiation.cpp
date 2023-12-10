class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& vars, int tar) {
        vector<int> res;
        int idx = 0;

        for (auto v : vars) {
            int x = v[0], y = v[1], z = v[2], w = v[3];

            int n1 = 1;
            for (int i = 0; i < y; ++i) {
                n1 = (n1 * x) % 10;
            }

            int n2 = 1;
            for (int i = 0; i < z; ++i) {
                n2 = (n2 * n1) % w;
            }

            if (n2 == tar) {
                res.push_back(idx);
            }

            idx++;
        }

        return res;
    }
};