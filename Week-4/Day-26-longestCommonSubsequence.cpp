class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length(), m = text2.length();
        if(!m or !n)  return 0;
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                dp[i][j] = (text1[i-1] == text2[j-1]) ? (1 + dp[i-1][j-1]) : max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};
