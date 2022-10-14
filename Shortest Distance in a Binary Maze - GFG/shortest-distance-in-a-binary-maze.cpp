//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

/*
class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
         
        if(source.first==destination.first && source.second == destination.second)
                return 0;                
                         
        queue<pair<int,pair<int,int>>> q;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[source.first][source.second]=0;
        q.push({0,{source.first,source.second}});
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int dis=it.first;
            int x=it.second.first;
            int y=it.second.second;
            
            for(int i=0;i<4;i++){
                int newx=x+dx[i];
                int newy=y+dy[i];
                
                if(newx>=0 and newx<n and newy>=0 and newy<m and
                   grid[newx][newy]==1 and dis+1<dist[newx][newy]){
                      
                       dist[newx][newy]=dis+1;
                       if(newx==destination.first and 
                       newy==destination.second) return dis+1;
                       q.push({i+dis,{newx,newy}});
                   }
            }
        }
        return -1;
    }
};



*/
 class Solution{
       public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
         
   if(source.first==destination.first && source.second == destination.second)
           return 0;

        queue<pair<int,pair<int,int>> > q;

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        int deltaRow[] =  {-1,0,1,0};
        int deltaCol[] =  {0,1,0,-1};
        dist[source.first][source.second] = 0;
        q.push({0,{source.first,source.second}});

       while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
    
   for(int i=0;i<4;i++)
      {
      int newRow = row + deltaRow[i];
                int newCol = col + deltaCol[i];
         if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && grid[newRow][newCol]==1 

             && dis + 1 < dist[newRow][newCol])

           {

                        dist[newRow][newCol] = dis + 1;
                     if(newRow == destination.first && newCol==destination.second )
                           return dis + 1;

                           

                        q.push({1+dis,{newRow,newCol}});   

                    }

            }

        }

        

        return -1;
        
    }
};





//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends