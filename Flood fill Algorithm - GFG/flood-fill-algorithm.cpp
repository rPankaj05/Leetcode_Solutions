//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
void dfs(vector<vector<int>>& image,int n,int m, int oldColor,int x, 
                 int y,int newColor){
   
    if(x<0 || x>=n || y<0 || y>=m || image[x][y]!=oldColor) return;
     
    image[x][y]=newColor;
    
    dfs(image,n,m,oldColor,x+1,y,newColor);
    dfs(image,n,m,oldColor,x,y+1,newColor);
    dfs(image,n,m,oldColor,x-1,y,newColor);
    dfs(image,n,m,oldColor,x,y-1,newColor);
}
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        if(oldColor==newColor) return image;
        int n=image.size();
        int m=image[0].size();
        dfs(image,n,m,oldColor,sr,sc,newColor);
        return image;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends