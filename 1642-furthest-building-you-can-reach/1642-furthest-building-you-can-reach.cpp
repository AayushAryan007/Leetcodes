class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       priority_queue<int,vector<int>, greater<int>> pq;
        
        for(int i=0;i<heights.size()-1;i++){
            int diff=heights[i+1]-heights[i];
            if(diff>0) pq.push(diff);
            if(pq.size()>ladders){
                bricks-=pq.top();
                pq.pop();
            }
            if(bricks<0) return i;
        }
        
        return heights.size()-1;
    }
};

// class Solution {
// public:
//     int furthestBuilding(vector<int>& v, int bricks, int ladder) {
//         int n=v.size();
        
//         int count=0;
        
//         for(int i=1;i<n;i++){
            
            
//             if(v[i]<=v[i-1]){
//                 count++;
//                 continue;
                
//             }
//             else{
//                 int gap=v[i]-v[i-1];
//                 int flag=0;
                
//                 if(bricks>=gap){
//                     bricks-=gap;
//                     count++;
//                     flag=1;
                    
//                 }else{
//                     if(ladder>0)
//                     {
//                         count++;
//                         ladder--;
                         
//                         flag=1;    
//                     }
//                 }
                
//                 if(flag==0){
//                     return i-1;
//                 }
//             }
//         }
//         return n-1;
//     }
// };