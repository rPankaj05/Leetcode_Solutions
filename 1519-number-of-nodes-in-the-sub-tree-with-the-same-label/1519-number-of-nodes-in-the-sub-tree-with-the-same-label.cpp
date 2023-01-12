class Solution {
public:
    vector<int> helper(int node,int par,vector<vector<int>>& adj,string& labels,vector<int>& ans)
    {
        vector<int>ncnt(26); // maintaining the cnt of all the letters for currnt node
        ncnt[labels[node] -'a'] = 1;

        for(auto i:adj[node])
        {
            if(i == par)
            {
                continue;
            }

            vector<int>Ccnt = helper(i,node,adj,labels,ans); // calculating the count of lables for subarrays
            for(int j=0;j<26;j++)
            {
                ncnt[j] += Ccnt[j];
            }
        }

        ans[node] = ncnt[labels[node] - 'a'];
        return ncnt;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) 
    {
        vector<vector<int>>adj(n);

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }        
        
        vector<int>ans(n);
        vector<int>fans = helper(0,-1,adj,labels,ans);
        return ans;
    }
};