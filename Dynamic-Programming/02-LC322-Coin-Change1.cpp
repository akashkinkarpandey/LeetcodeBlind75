/*
Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
*/
class Solution {
public:
     int CoinChange1(int n,int amount,vector<int>& coins,vector<vector<long long>>&dp)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return (dp[n][amount]==INT_MAX)?-1:dp[n][amount];
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        int n=coins.size();
        vector<vector<long long>>dp(n+1,vector<long long>(amount+1));
        for(int i=0;i<=amount;i++)
            dp[0][i]=INT_MAX;
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        return CoinChange1(n,amount,coins,dp);
    }
};
