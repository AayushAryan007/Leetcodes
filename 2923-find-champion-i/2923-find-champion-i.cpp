// class Solution {
// public:
//     int findChampion(vector<vector<int>>& grid) {
//         int max=INT_MIN;
        
//         int n=grid[0].size();
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                if(i!=j){
                   
//                } 
//             }
//         }
//     }
// };
class Solution {
public:
    int findChampion(vector<vector<int>>& fruitGrid) {
        int n = fruitGrid.size();

        for (int i = 0; i < n; i++) {
            bool isChampion = true;

            for (int j = 0; j < n; j++) {
                if (i != j && fruitGrid[j][i] == 1) {
                    isChampion = false;
                    break;
                }
            }

            if (isChampion) {
                return i;
            }
        }

        return -1; 
    }
};
