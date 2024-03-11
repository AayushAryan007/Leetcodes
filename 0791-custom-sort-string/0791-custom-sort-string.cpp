class Solution {
public:
    string customSortString(string order, string s) {
        //make a custom comparator to do custom sorting
        
        auto comp=[&] (char a, char b){
            return order.find(a) <order.find(b);
        };
        sort(s.begin(),s.end(),comp);
        
        return s;
        
    }
};