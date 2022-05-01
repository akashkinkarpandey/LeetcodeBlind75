// https://leetcode.com/problems/product-of-array-except-self/
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    return 0;
}
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int p = 1;
        vector<int> output;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            p = p * nums[i];
            output.push_back(p);
        }
        p = 1;
        for (int i = len - 1; i > 0; i--)
        {
            output[i] = output[i - 1] * p;
            p = p * nums[i];
        }
        output[0] = p;
        return output;
    }
};