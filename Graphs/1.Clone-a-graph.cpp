class Solution {
public:
    void dfs(Node *node,Node *copy,vector<Node*>&vis)
    {
        vis[copy->val]=copy;
        for(auto adj:node->neighbors)
        {
            if(vis[adj->val]==NULL)
            {
                //we create a new node 
                //if it is unvisited
                Node* newNode=new Node(adj->val);
                (copy->neighbors).push_back(newNode);
                //adding new node to adjacency list in copy
                dfs(adj,newNode,vis);
            }
            else
            {
                //adj is already visited
                copy->neighbors.push_back(vis[adj->val]);
                //using visited arrays
                //to store address of nodes already visited
            }
        }
    }
    Node* cloneGraph(Node* node) 
    {
        if(node==NULL)
            return NULL;
        vector<Node*>vis(102,NULL);
        Node *copy=new Node(node->val);
        dfs(node,copy,vis);
        return copy;
    }
};
