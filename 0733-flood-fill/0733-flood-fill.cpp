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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor=image[sr][sc];
        if(oldColor==color) return image;
        int n=image.size();
        int m=image[0].size();
        dfs(image,n,m,oldColor,sr,sc,color);
        return image;
    }
};