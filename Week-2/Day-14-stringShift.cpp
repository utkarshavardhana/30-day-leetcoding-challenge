class Solution {
public:
    
    string ls(string s, int r) {
        int n = s.size();
        r %= n;
        string str = s.substr(r, n-r);
        str += s.substr(0, r);
        return str;
    }
    
    string rs(string s, int r) {
        int n = s.size();
        r %= n;
        string str = s.substr(n-r, r);
        str += s.substr(0, n-r);
        return str;
    }
    
    string stringShift(string s, vector<vector<int>>& shift) {
        int r = 0;
        for(vector<int> v : shift) {
            if(v[0] == 0) {
                r -= v[1];
            } else {
                r += v[1];
            }
        }
        if(r == 0)  return s;
        else if(r < 0)  return ls(s, abs(r));
        else return rs(s, r);
    }
};
