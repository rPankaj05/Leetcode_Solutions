class Solution {
   void solve(vector<vector<char>> &grid,int m,int n,int x,int y)
    {
      if(x<0 || x>=m || y<0 || y>=n|| grid[x][y]=='0')  
            return;
        
      
        grid[x][y] = '0';
        
        solve(grid,m,n,x+1,y); 
        solve(grid,m,n,x,y+1);  
        solve(grid,m,n,x-1,y);  
        solve(grid,m,n,x,y-1); 
    }
    
    
public:
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