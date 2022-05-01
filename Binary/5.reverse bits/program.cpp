// https://leetcode.com/problems/reverse-bits/submissions/


class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t ans = 0;
        for (uint32_t i = 0; i < 32; i++)
        {
            int t = (n >> i) & 1;
            ans = ans | (t << (32 - i - 1));
        }
        return ans;
    }
};
#include <iostream>
using namespace std;
int main()
{

    return 0;
}
