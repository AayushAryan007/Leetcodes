class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
           int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> answer(m, vector<int>(n, 0));

        for (int j = 0; j < n; j++) {
            int max_val = -1;
            for (int i = 0; i < m; i++) {
                if (matrix[i][j] > max_val) {
                    max_val = matrix[i][j];
                }
            }

            for (int i = 0; i < m; i++) {
                answer[i][j] = (matrix[i][j] == -1) ? max_val : matrix[i][j];
            }
        }

        return answer;
    }
};