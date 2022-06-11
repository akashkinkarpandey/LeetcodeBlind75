/*
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/
class Solution {
public:
    int dp[100005];
//memoization
int ways(int n)
{
    if(n==0 or n==1)
    return 1;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=ways(n-1)+ways(n-2);
}
    int climbStairs(int n) {
            memset(dp,-1,sizeof(dp));
return ways(n);
    }
};
