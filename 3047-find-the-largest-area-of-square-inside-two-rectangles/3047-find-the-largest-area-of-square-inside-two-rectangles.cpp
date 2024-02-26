class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long area=0;
        for( int i=0;i<bottomLeft.size();++i){
            for(int j=i+1;j<topRight.size();++j){
                int left=max(bottomLeft[i][0],bottomLeft[j][0]);
                int right=min(topRight[i][0],topRight[j][0]);
                
                int down=max(bottomLeft[i][1],bottomLeft[j][1]);
                int up=min(topRight[i][1],topRight[j][1]);
                
                if(left<right and down < up){
                  long long side  =min(right-left, up-down);
                    area=max(area,side*side);
                }
            }
        }
        return area;
    }
};