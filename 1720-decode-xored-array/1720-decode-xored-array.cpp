class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> orArr;
        orArr.push_back(first);
        for(int i=0;i<(int)encoded.size();i++)
        {
            //The reverse of any xor operation is itself, so the reverse of bitxor is bitxor. This is a fundamental property of xor, applying it twice gets you back where you started.
            orArr.push_back(encoded[i]^orArr[i]);
        }

        return orArr;
    }
};