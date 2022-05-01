// https://leetcode.com/problems/number-of-1-bits/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
         return bitset<32>(n).count();
    }
};
int main()
{

return 0;
}
