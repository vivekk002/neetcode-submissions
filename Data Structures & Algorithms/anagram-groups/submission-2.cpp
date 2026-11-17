class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mpp;
        for(const string& s : strs){
            string key = s;
            sort(key.begin(),key.end());
            mpp[key].push_back(s);
        }
        ans.reserve(mpp.size());
        for(auto& s : mpp){
            ans.push_back(s.second);
        }
        return ans;
    }
};