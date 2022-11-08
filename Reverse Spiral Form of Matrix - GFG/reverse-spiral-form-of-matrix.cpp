//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
     vector<int> ans;
    
     void Go_up(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int temp){
          while(i>=x) ans.push_back(mat[i--][j]);
          if(ans.size()==temp) return ;
          Go_right(mat,i+1,j+1,x+1,y,n,m,temp);
      }
    
     void Go_left(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int temp){
          while(j>=y) ans.push_back(mat[i][j--]);
          if(ans.size()==temp) return ;
          Go_up(mat,i-1,j+1,x,y+1,n,m,temp);
      }
    
      void Go_down(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int temp){
          while(i<n) ans.push_back(mat[i++][j]);
         if(ans.size()==temp) return ;
          Go_left(mat,i-1,j-1,x,y,n-1,m,temp);
      }
    
    void Go_right(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int temp){
          while(j<m) ans.push_back(mat[i][j++]);
          if(ans.size()==temp) return ;
          Go_down(mat,i+1,j-1,x,y,n,m-1,temp);
      }
      
  
  
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&mat)  {
      int i=0, j=0, x=0, y=0, n=r, m=c; 
      int temp=m*n;
      Go_right(mat,i,j,1,y,n,m,temp);
      reverse(ans.begin(),ans.end());
      return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends