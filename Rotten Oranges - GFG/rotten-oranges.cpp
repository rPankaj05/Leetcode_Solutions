//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    private:
    
    int bfs(vector<vector<int>> &grid,int n,int m,queue<pair<int,int>> &q ,
                       vector<vector<int>> &vis)
       
       {
            int ans=0;
            
       
          while(!q.empty()){
               
             bool flag=0;
            int size=q.size();
           
            while(size--){
              
            int x=q.front().first;
            int y=q.front().second;
             q.pop();
             
             
            int dx[]={1,0,-1,0};
            int dy[]={0,1,0,-1};
            
            for(int i=0;i<4;i++){
                int newx=x+dx[i];
                int newy=y+dy[i];
               
                if(newx>=0 and newx<n and newy>=0 and newy<m and vis[newx][newy]==0 and grid[newx][newy]==1){
                  vis[newx][newy]=1;
                  q.push({newx,newy});
                  grid[newx][newy]=2;
                  flag=true;
                 }
            }
          }
          if(flag) ans++;
        }
        return ans;
    }
    
    
    
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       queue<pair<int,int>> q;
       vector<vector<int>> vis(n,vector<int>(m,0));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==2) {
                   q.push({i,j});
                   vis[i][j]=1;
               }
           }
       }
      
      int ans= bfs(grid,n,m,q,vis);
      
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++) {
              if(grid[i][j]==1 ) ans=-1 ;
          }
      }
      
      return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends