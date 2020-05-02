class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> pq;
        for(int stone : stones) pq.push(stone);
        while(pq.size() >= 2) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            y = abs(y-x);
            if(y != 0)  pq.push(y);
        }
        return (!pq.empty()) ? pq.top() : 0;
    }
};
