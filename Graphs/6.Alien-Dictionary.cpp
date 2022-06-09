//https://practice.geeksforgeeks.org/problems/alien-dictionary/1#
class Solution{
    public:
    void dfs(int v,vector<bool>&vis,vector<int>g[],stack<int>&st)
    {
        vis[v]=true;
        for(auto it:g[v])
        {
            if(!vis[it])
                dfs(it,vis,g,st);
        }
        st.push(v);
    }
    string findOrder(string dict[], int N, int k) 
    {
        //code here
        vector<int>g[k];
        for(int i=0;i<N-1;i++)
        {
            string a=dict[i];
            string b=dict[i+1];
            int mini=min(a.size(),b.size());
            for(int j=0;j<mini;j++)
                {
                    if(a[j]!=b[j])
                    {
                        g[a[j]-'a'].push_back(b[j]-'a');
                        break;   
                    }
                }
        }
            vector<bool>vis(k,0);
            stack<int>st;
            for(int i=0;i<k;i++)
                if(!vis[i])
                    dfs(i,vis,g,st);
            string ans="";
            while(!st.empty())
            {
                int x=st.top();
                st.pop();
                char ch=x+'a';
                ans.push_back(ch);
            }
            return ans;
    }
};
