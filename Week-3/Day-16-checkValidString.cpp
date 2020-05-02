class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st, st1;
        int i(0);
        for(const auto &c: s) {
            if(c == '(') st.push(i);
            else if(c == '*') st1.push(i);
            else {
                if(st.empty() && st1.empty()) return false;
                else { 
                    if(!st.empty()) st.pop();
                    else st1.pop();
                }
            }
            i++;
        }
        while(!st.empty()) {
            if(!st1.empty() && st.top() < st1.top()) st.pop(), st1.pop();
            else return false;
        }

        return true;
    }
};
