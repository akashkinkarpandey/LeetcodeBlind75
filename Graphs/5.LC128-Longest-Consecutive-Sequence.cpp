/*
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. 
Therefore its length is 4.
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_map<int,bool>m;
        for(auto &val:nums)
            m[val]=true;
        for(auto i:nums)
        {
            if(m.find(i-1)!=m.end())
                m[i]=false;
        }
        int maxi=1;
        for(auto i:nums)
        {
            if(m[i])
            {
                int j=i;
                int c=1;
                while(m.find(j+1)!=m.end())
                {j++;c++;}
                maxi=max(maxi,c);
                
            }
        }
        return maxi;
                    
    }
};
