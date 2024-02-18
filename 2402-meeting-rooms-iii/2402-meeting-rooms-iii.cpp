class Solution {
public:
    #define ll long long
    int mostBooked(int n, vector<vector<int>>& meetings) {
        map<int,int> booked;
        
        auto compare=[](const pair<ll,int> & a, const pair<ll,int> &b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            else return a.first>b.first;
        } ;//this was to compare time and room ids together in data structure
        
        priority_queue<pair<ll,int> , vector<pair<ll,int>>, decltype(compare)> pq;
        
        priority_queue<int,vector<int>, greater<int>> freeRooms;
        
        for(int i=0;i<n;i++) freeRooms.push(i);
        
        sort(meetings.begin(),meetings.end());
        for(auto & v:meetings){
            ll start=v[0],end=v[1];
            
            while(!pq.empty() and pq.top().first<=start){
                freeRooms.push(pq.top().second);
                pq.pop();
                
            }
            
            if(!freeRooms.empty()){
                booked[freeRooms.top()]++;
                pq.push({end,freeRooms.top()});
                freeRooms.pop();
            }
            else{
                booked[pq.top().second]++;
                auto p=pq.top();
                pq.pop();
                pq.push({p.first+end-start,p.second});
            }
        }
        
        int maxRooms=0, meetingRoom=-1;
        
        for(auto p:booked){
            if(p.second>maxRooms){
                maxRooms=p.second;
                meetingRoom=p.first;
            }
        }
        
        return meetingRoom;
        
    }
};