class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m;
        if(n > 0) m = grid[0].size();
        else return 0;
        vector<vector<int> > dp(grid);
        for(int i = 1; i < m; i++) {
            dp[0][i] += dp[0][i-1];
        }
        for(int i = 1; i < n; i++) {
            dp[i][0] += dp[i-1][0];
        }
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                 dp[i][j] += min(dp[i][j-1], dp[i-1][j]);
            }
        }
        return dp[n-1][m-1];
    }
};
