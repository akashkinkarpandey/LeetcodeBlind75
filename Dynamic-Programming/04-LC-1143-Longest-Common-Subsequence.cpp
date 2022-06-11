class Solution {
public:
    int dp[1005][1005];
int lcs(int i, int j, string &s, string &s1)
{
    if (i <= 0 or j <= 0)
        return dp[i][j] = 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    // remove one char from s1
    int ans = lcs(i, j - 1, s, s1);
    // remove one char from s
    int ans1 = lcs(i - 1, j, s, s1);
    // remove one char from s and s1
    // and check if ith and jth character are same
    // if characters are same ,add 1 else add 0
    int ans2 = lcs(i - 1, j - 1, s, s1) + (s[i - 1] == s1[j - 1]);
    return dp[i][j] = max({ans, ans1, ans2});
}
    int longestCommonSubsequence(string text1, string text2) 
    {
        memset(dp, -1, sizeof(dp));
        return lcs(text1.size(),text2.size(),text1,text2);
    }
};
