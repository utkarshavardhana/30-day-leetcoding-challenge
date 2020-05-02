class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curProfit = 0;
        for(int i = 1; i < prices.size(); i++) {
            int j = i - 1;
            int p = prices[i] - prices[j];
            if(p > 0) {
                curProfit += p;
            }
        }
        
        return curProfit;
    }
};
