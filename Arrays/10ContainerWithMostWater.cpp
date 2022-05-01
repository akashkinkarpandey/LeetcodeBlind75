// https://leetcode.com/problems/container-with-most-water/
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
    int maxArea(vector<int> &height)
    {
        int l = 0, h = height.size() - 1;
        int maxi = 0;
        while (l < h)
        {
            int lh = height[l];
            int rh = height[h];
            maxi = max(maxi, (min(lh, rh) * (h - l)));
            if (lh < rh)
                l++;
            else
                h--;
        }
        return maxi;
    }
};