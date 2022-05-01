// https : // leetcode.com/problems/maximum-product-subarray/
        class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int len = nums.size();
        int p = 1;
        int maxi = INT_MIN;
        for (int i = 0; i < len; i++)
        {
            p = p * nums[i];
            maxi = max(maxi, p);
            if (p == 0)
                p = 1;
        }
        p = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            p = p * nums[i];
            maxi = max(maxi, p);
            if (p == 0)
                p = 1;
        }
        return maxi;
    }
};
#include<iostream>
using namespace std;
int main()
{

return 0;
}