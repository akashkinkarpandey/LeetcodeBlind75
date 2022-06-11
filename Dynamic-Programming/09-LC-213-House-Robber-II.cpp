class Solution {
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
        vector<int>a,b;
        int n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)
                a.push_back(nums[i]);
            if(i!=n-1)
                b.push_back(nums[i]);
        }
        int ans1=help(n-2,a);
        memset(dp,-1,sizeof(dp));
        int ans2=help(n-2,b);
        return max(ans1,ans2);
    }
};
