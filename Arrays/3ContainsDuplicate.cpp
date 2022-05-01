// https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        return nums.size() > (unordered_set(nums.begin(), nums.end())).size();
    }
};