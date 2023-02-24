//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
     void solve(vector<vector<char>> &grid,int m,int n,int x,int y)
    {
      if(x<0 || x>=m || y<0 || y>=n|| grid[x][y]=='0')  
            return;
        
      
        grid[x][y] = '0';
        
        int dx[8]={0,1,0,-1,1,-1,1,-1};
        int dy[8]={1,0,-1,0,1,1,-1,-1};
        
        for(int i=0;i<8;i++){
            solve(grid,m,n,x+dx[i],y+dy[i]);
        }
        
        // solve(grid,m,n,x+1,y); 
        // solve(grid,m,n,x,y+1);  
        // solve(grid,m,n,x-1,y);  
        // solve(grid,m,n,x,y-1); 
        // solve(grid,m,n,x-1,y-1); 
        // solve(grid,m,n,x+1,y-1); 
        // solve(grid,m,n,x+1,y+1); 
        // solve(grid,m,n,x-1,y+1); 
        
    }
    
    
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
       
        int ans = 0;
        
        for(int i=0;i<m;++i)
        {
          for(int j=0;j<n;++j)
            {
                if(grid[i][j]=='1')
                {   ans++;
                    solve(grid,m,n,i,j);
                    
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends