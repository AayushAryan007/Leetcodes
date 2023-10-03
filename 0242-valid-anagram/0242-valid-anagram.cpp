class Solution {
 public:
  bool isAnagram(string s, string t) {
      if(s.length() != t.length())
        {
            return false;
        }

        
        vector<int> freq_S(26, 0);
        vector<int> freq_T(26, 0);

     
        for(int i = 0; i < s.length(); i++)
        {
            freq_S[s[i] - 'a']++;
            freq_T[t[i] - 'a']++;
        }
        if(freq_S == freq_T)
        {
            return true;
        }

        return false;
  }
};