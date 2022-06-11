/*
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true
    */
class Solution {
public:
    int r,c;
    int len;
    vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
    // vector<vector<char>>board1;
    bool dfs(int i,int j,vector<vector<char>>& board,string &word,int count)
    {
        if(count>=len)
        {
            // cout<<len<<endl;
            return true;
        }
        if(i<0 or i>=r or j<0 or j>=c or word[count]!=board[i][j])
            return false;
        // if(m.find(j)!=m.end() and m[j]==i)
        //     return false;
        // m[j]=i;
        // cout<<i<<"--"<<j<<endl;
        char character=board[i][j];//storing char for making matrix original while backtracking
        board[i][j]='.';//marking a cell as visited
        // bool ans=false;
        for(auto &it:dir)//puting & infront of it is mandatory to avoid TLE
        {
          
            if(dfs(i+it[0],j+it[1],board,word,count+1))
            {
                board[i][j]=character;//we do this so that original matrix in main() is intact
              return true;
            }
            // ans=ans or dfs(i+it[0],j+it[1],board,word,count+1);
        }
        // m[j]=99;
        board[i][j]=character;//backtracking step->undoing changes in case we get false
        // return ans;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        //matrix//recursion backtracking
        r=board.size();
        c=board[0].size();
        len=word.size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                // board1=board;
                // m.clear();
                if(dfs(i,j,board,word,0))
                    return true;
            }
        }
        return false;
    }
};
