#define ll long long int
class Solution {
public:
    long long findScore(vector<int>& nums) {
        set<pair<int,int>>s;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            s.insert({nums[i],i});
        }
        
          ll ans=0;
        
        while(s.size()>0){
            auto p=*s.begin();
            int idx=p.second;
            ans+=p.first;
            s.erase(p);
            
            if(idx-1>=0){
                pair<int,int> p_left={ nums[idx-1], idx-1};
                if(s.find(p_left)!=s.end())
                    s.erase(p_left);
            }
            
            if(idx+1<=n-1){
                pair<int,int> p_right={ nums[idx+1], idx+1};
                if(s.find(p_right)!=s.end())
                    s.erase(p_right);
            }
        }
        return ans;
    }
};



//initial intuition using general array and marking each element by 0;
//brute force as we iterate the loop every time we need to find a min element;
// class Solution {
// public:
//     long long findScore(vector<int>& nums) {
//         int mini=INT_MAX;
//         int score=0;
//         int l=nums.size();
//         int countALL=l;
//         int minind=l+1;
//         while(countALL>0)
//         {
//             for(int i=0;i<l;i++)
//             {
//                 if(nums[i]>0 && nums[i]<mini)
//                    { mini=nums[i];
//                    minind=i;}
//             }
//             score+=mini;
//             countALL--;
//             if((minind-1)>=0&&nums[minind-1]!=0)
//                 {nums[minind-1]=0; countALL--;}
//             if((minind+1)<=l-1&&nums[minind+1]!=0)
//                { nums[minind+1]=0; countALL--;}
            
//         }
        
//         return score;
        
        
//     }
// };