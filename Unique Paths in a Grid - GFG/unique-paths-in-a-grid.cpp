//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int MOD=1e9+7;

class Solution {
  public:
    
//   int solve(vector<vector<int>> &grid,int i, int j,vector<vector<int>> &dp){
//       if(i>=0 and j>=0 || grid[i][j]==0) return 0;
//       if(i==0 and j==0) return 1;
//       if(i<0 || j<0) return 0;
//       if(dp[i][j]!=-1) return dp[i][j];
//       int left=solve(grid,i,j-1,dp);
//       int up=solve(grid,i-1,j,dp);
//       dp[i][j]=(left+up)%mod;
//       return dp[i][j];
//   }
  
  
  
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
       vector<int> dp(m);
    dp[0] = (grid[0][0] == 1 ? 1 : 0);
    for (int j = 1; j < m; j++) {
        dp[j] = (grid[0][j] == 1 ? dp[j-1] : 0);
    }
    for (int i = 1; i < n; i++) {
        if (grid[i][0] == 0) {
            dp[0] = 0;
        }
        for (int j = 1; j < m; j++) {
            if (grid[i][j] == 0) {
                dp[j] = 0;
            } else {
                dp[j] = (dp[j] + dp[j-1]) % MOD;
            }
        }
    }
    return dp[m-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends