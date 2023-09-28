class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& a1, vector<int>& a2, vector<int>& a3) {
        unordered_map<int,int>mp1,mp2,mp3;
        int n1=a1.size(),n2=a2.size(), n3=a3.size();
        for(int i=0;i<n1;i++){
            mp1[a1[i]]++;
        }
        for(int i=0;i<n2;i++){
            mp2[a2[i]]++;
        }for(int i=0;i<n3;i++){
            mp3[a3[i]]++;
        }
        
        
        //create set for uniqueness...
        set<int> s;
        
        for(int i=0;i<n1;i++){
            if(mp2[a1[i]]>0||mp3[a1[i]]>0)
                s.insert(a1[i]);
        }
        for(int i=0;i<n2;i++){
            if(mp1[a2[i]]>0||mp3[a2[i]]>0)
                s.insert(a2[i]);
        }for(int i=0;i<n3;i++){
            if(mp2[a3[i]]>0||mp1[a3[i]]>0)
                s.insert(a3[i]);
        }
        
        vector<int> v;
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};