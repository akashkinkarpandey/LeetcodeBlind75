#include <iostream>
#include <vector>
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};
using namespace std;
int main()
{

    return 0;
}