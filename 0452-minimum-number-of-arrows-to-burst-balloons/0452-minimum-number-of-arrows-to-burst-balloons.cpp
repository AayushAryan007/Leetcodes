class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int n=points.size();
        
        auto comp=[](vector<int>& a, vector<int> & b){
            return a[1]<b[1];
        };
        
        sort(points.begin(),points.end() , comp);
        
        int curpos=points[0][1], arrow=1;
        
        for(int i=1;i<n;i++){
            if(points[i][0]<=curpos){
                continue;
            }
            
            curpos=points[i][1];
            arrow++;
        }
        
        return arrow;
            //         int n=points.size();
        
//         sort(points.begin(),poinst.end());
//         vector<vector<int>> ans;
        
//         for(int i=0;i<n;i++){
//             int start=points[i][0];
//             int end=points[i][1];
//             if(ans.empty() or ans.back()[1] < start){
//                 ans.pushback(points[i]);
                
//             }
            
           
//         }
    }
};