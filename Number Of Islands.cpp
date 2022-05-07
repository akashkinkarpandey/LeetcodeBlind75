#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
}
class Solution {
public:
    int r,c;
    vector<pair<int,int>>v={{1,0},{0,1},{0,-1},{-1,0}};
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0 or i>=r or j<0 or j>=c or grid[i][j]!='1')
            return;
        grid[i][j]='2';
        for(auto &it:v)
            dfs(grid,it.first+i,it.second+j);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int number=0;
        r=grid.size();
        c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    number++;
                }
            }
        }
        return number;
    }
};
