//maximum sum of non adjacent elements
class Solution 
{
public:
    int dp[101];
    int help(int ind,vector<int>&nums)
    {
        if(ind==0)
            return nums[ind];
        if(ind<0)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int take=nums[ind]+help(ind-2,nums);
        int notTake=help(ind-1,nums);
        return dp[ind]=max(take,notTake);
    }
    int rob(vector<int>& nums) 
    {
        memset(dp,-1,sizeof(dp));
        return help(nums.size()-1,nums);
    }
};
