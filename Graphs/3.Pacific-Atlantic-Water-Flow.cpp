class Solution {
public:
    int r,c;
    vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
    void dfs(int i,int j,int prev,vector<vector<int>>& heights,vector<vector<int>>&ocean)
    {
        if(i<0 or i>=r or j<0 or j>=c or ocean[i][j])
            return;
        if(heights[i][j]<prev)
            return;
        //we move from lower to higher heights
        
        ocean[i][j]=1;
        for(auto it:dir)
            dfs(i+it[0],j+it[1],heights[i][j],heights,ocean);
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        r=heights.size();   
        c=heights[0].size();
        vector<vector<int>>ans;
        vector<vector<int>>pacific(r,vector<int>(c,0));
        vector<vector<int>>atlantic(r,vector<int>(c,0));
        for(int i=0;i<c;i++)
        {
         dfs(0,i,INT_MIN,heights,pacific);
        dfs(r-1,i,INT_MIN,heights,atlantic);   
        }
        for(int i=0;i<r;i++)
        {
        dfs(i,0,INT_MIN,heights,pacific);
        dfs(i,c-1,INT_MIN,heights,atlantic);  
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {    
                if(pacific[i][j] and atlantic[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
        
    }
};
