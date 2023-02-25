class Solution {
    
    private:
    
    int bfs(vector<vector<int>>& grid, int n, int m, queue<pair<int,int>> &q,                       vector<vector<int>> &vis)
        
    {
        
        int ans=0;
        
        while(!q.empty()){
            
          bool flag=false;
            
          int size=q.size();
            
          while(size--){
             
              int x=q.front().first;
              int y=q.front().second;
              q.pop();
              
              int dx[]={0,1,-1,0};
              int dy[]={1,0,0,-1};
              
              for(int i=0;i<4;i++){
                  int newx=x+dx[i];
                  int newy=y+dy[i];
                  
                  if(newx>=0 and newx<n and newy>=0 and newy<m and 
                         grid[newx][newy]==1 and !vis[newx][newy]) {
                      vis[newx][newy]=1;
                      q.push({newx,newy});
                      flag=true;
                    }
                }
             }
            
          if(flag) ans++; 
        }
        
        return ans;
    }
    
public:
    int orangesRotting(vector<vector<int>>& grid) {
       
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        
        int ans=bfs(grid,n,m,q,vis);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 and !vis[i][j]) ans=-1; 
            }
        }
        
        return ans;
        
    }
};