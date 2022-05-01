// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> m;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            int t = target - nums[i];
            if (m.find(t) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[t]);
                return ans;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};