class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s, t;
        for(char c : S) {
            if(c == '#') {
                if(!s.empty())  s.pop();
            } else {
                s.push(c);
            }
        }
        for(char c : T) {
            if(c == '#') {
                if(!t.empty())  t.pop();
            } else {
                t.push(c);
            }
        }
        return s==t;
    }
};
