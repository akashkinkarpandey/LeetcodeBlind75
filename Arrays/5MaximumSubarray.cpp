//https://leetcode.com/problems/maximum-subarray/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{

return 0;
}
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxi=INT_MIN;
        int sum=0;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
    
};