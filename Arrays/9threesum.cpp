// https://leetcode.com/problems/3sum/
#include<iostream>
#include<vector>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++)
        {
            int t=-nums[i];
            int l=i+1;int h=len-1;
            while(l<h)
            {
                int sum=nums[l]+nums[h];
                if(sum>t)
                    h--;
                else if(sum<t)
                    l++;
                else
                {
                    vector<int>t(3,0);
                    t[0]=nums[i];
                    t[1]=nums[l];
                    t[2]=nums[h];
                    ans.push_back(t);
                    while(l<h and nums[l]==t[1]) l++;
                    while(l<h and nums[h]==t[2]) h--; 
                }
            }
            while(i+1<len and nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};
using namespace std;
int main()
{

return 0;
}