class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty())  return 0;
        int n = matrix.size(), m = matrix[0].size(), mx = 0;
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == '1') {
                    if(i == 0 or j == 0) dp[i][j] = 1;
                    else  dp[i][j] = 1 + min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]});
                    mx = max(mx, dp[i][j]);
                }
            }
        }
        return mx*mx;
    }
};
