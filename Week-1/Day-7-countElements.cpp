class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> s;
        for(int i : arr) {
            s.insert(i);
        }
        int count = 0;
        for(int i : arr) {
            if(s.find(i+1) != s.end()) {
                count++;
            }
        }
        return count;
    }
};
