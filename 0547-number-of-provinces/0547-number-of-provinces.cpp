class Solution {
    
    private:
       void generateAdjList(vector<vector<int>> &isConnected, int V,
                               vector<int> adjList[]){
           for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 and i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                 }
            } 
          }
      }
      
     void dfs(int node,vector<int> adjList[],int Vis[]){
          Vis[node]=1;
          for(auto it:adjList[node]){
              if(!Vis[it]) dfs(it,adjList,Vis);
          }
      }
    
    
    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V=isConnected.size();
         
        vector<int> adjList[V];
        generateAdjList(isConnected,V,adjList);
        
        
        int Vis[V];
        for(int i=0;i<V;i++) Vis[i]=0;
        
        int ans=0;;
        
        for(int i=0;i<V;i++){
            if(!Vis[i]){
                ans++;
                dfs(i,adjList,Vis);
            }
        }
        
       return ans; 
        
    }
};