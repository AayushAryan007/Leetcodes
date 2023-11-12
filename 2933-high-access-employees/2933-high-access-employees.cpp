class Solution { 
public: 
    vector<string> findHighAccessEmployees(vector<vector<string>>& accessTimes) { 
        unordered_map<string, vector<int>> mp; 
        for (const auto& entry : accessTimes) { 
            string emp = entry[0]; 
            
            
            
            int accessTime = stoi(entry[1]); 
            
            
            mp[emp].push_back(accessTime); 
        } 
 
        vector<string> highAccessEmployees; 
 
        for (auto& entry : mp) { 
            sort(entry.second.begin(), entry.second.end()); 
 
            for (int i = 2; i < entry.second.size(); ++i) { 
                
                
                
                if (entry.second[i] - entry.second[i - 2] < 100) { 
                    highAccessEmployees.push_back(entry.first); 
                    break; 
                } 
            } 
        } 
 
        return highAccessEmployees; 
    } 
};