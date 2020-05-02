class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string> > m;
        for (string s : strs) {
            string str = s;
            sort(str.begin(), str.end());
            m[str].push_back(s);
        }
        vector<vector<string> > res;
        for(auto it=m.begin(); it!=m.end(); it++) {
            res.push_back((*it).second);
        }
        return res;
    }
};
