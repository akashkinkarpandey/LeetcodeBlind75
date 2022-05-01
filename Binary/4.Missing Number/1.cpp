// https://leetcode.com/problems/missing-number/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        long long t=n*(n+1)/2;
        return t-sum;
    }
};
int main()
{

return 0;
}