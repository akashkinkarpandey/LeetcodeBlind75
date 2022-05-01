// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size();
        int mini = INT_MAX;
        int maxi = 0;
        for (int i = 0; i < len; i++)
        {
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i] - mini);
        }
        return maxi;
    }
};