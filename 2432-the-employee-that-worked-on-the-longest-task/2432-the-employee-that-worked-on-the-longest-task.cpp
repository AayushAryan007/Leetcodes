

class Solution 
{
public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        int id=INT_MAX, maxi=INT_MIN,last=0;
        
        for(int i=0;i<logs.size();i++){
        if((logs[i][1]-last)>maxi||((logs[i][1]-last)==maxi && id> logs[i][0]))
        {
            maxi=(logs[i][1]-last);
            id=logs[i][0];
        }
            last=logs[i][1];
        }
        return id;
    }
};


// class Solution {
// public:
//     int hardestWorker(int n, vector<vector<int>>& logs) {
//         int maxi=INT_MIN;
//         int time=0;
//         map<int,int> mp;
//         int i=0;
//         int ans=0;
//         int j=0;
//         while(j<logs.size())
//         {
//             maxi=max(maxi,(logs[i][1])-time);
//             time=logs[i][1];
            
            
//             mp.insert(make_pair(logs[i][0], logs[i][1]-time));
               
//             j+=(logs[i][1]-time);
//             i++;
//         }
        
//         int a=maxi;
        
//         for(auto rit=mp.begin();rit!=mp.end();++rit){
//             if(rit->second==a){
//                 ans= rit->first;
//                 break;
//             }
//         }
//         return ans;
//     }
// };

