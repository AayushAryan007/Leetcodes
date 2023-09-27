class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        long long vol=(long long)l*w*h;
        
        if(l>=1e4||w>=1e4||h>=1e4||vol>=1e9)
        {
            if(m>=100){
                return "Both";
            }
            else{
                return "Bulky";
            }
        }
        
        else{
            if(m>=100){
                return "Heavy";
            }
        }
        return "Neither";
    }
};