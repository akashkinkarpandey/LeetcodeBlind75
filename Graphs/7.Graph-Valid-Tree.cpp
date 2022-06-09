//submitted on coding ninjas
//qs link-> https://www.codingninjas.com/codestudio/problem-details/graph-valid-tree_1376618
#include<vector>
bool dfs(vector<vector<int>>&graph,int v,int par,vector<bool>&vis)
{
	vis[v]=1;
	for(auto it:graph[v])
	{
		if(!vis[it])
		{
			if(dfs(graph,it,v,vis))
				return true;
		}
		else if(it!=par)
		{
			return true;
		}
	}
	return false;
}
bool checkgraph(vector<vector<int>> edges, int n, int m)
{
    // write your code here
	vector<vector<int>>graph(n);
// 	int len=edges.size();
	for(int i=0;i<m;i++)
	{	
		graph[edges[i][0]].push_back(edges[i][1]);
		graph[edges[i][1]].push_back(edges[i][0]); 
	}
	vector<bool>vis(n,0);
	int numberOfComponents=1;
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			if(numberOfComponents>=2) return false;
			if(dfs(graph,i,-1,vis))
				return false;
			numberOfComponents++;
		}
		
	}
// 	if(dfs(graph,0,-1,vis))
// 				return false;
	return true;
	
}
