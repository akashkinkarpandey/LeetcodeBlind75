// https://leetcode.com/problems/number-of-1-bits/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        uint32_t c = 0;
        while (n)
        {
            c++;
            n = n & (n - 1);
        }
        return c;
    }
};
int main()
{

    return 0;
}