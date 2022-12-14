class Solution {
    
    private:
       void Go_up(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int &cnt,int temp){
          while(i>=x) mat[i--][j]=cnt++;
          if(cnt==temp) return ;
          Go_right(mat,i+1,j+1,x+1,y,n,m,cnt,temp);
      }
    
     void Go_left(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int &cnt,int temp){
          while(j>=y) mat[i][j--]=cnt++;
          if(cnt==temp) return ;
          Go_up(mat,i-1,j+1,x,y+1,n,m,cnt,temp);
      }
    
      void Go_down(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int &cnt,int temp){
          while(i<n) mat[i++][j]=cnt++;
         if(cnt==temp) return ;
          Go_left(mat,i-1,j-1,x,y,n-1,m,cnt,temp);
      }
    
    void Go_right(vector<vector<int> > &mat,int i,int j,int x,int y,int n,int m,int &cnt,int temp){
          while(j<m) mat[i][j++]=cnt++;
          if(cnt==temp) return ;
          Go_down(mat,i+1,j-1,x,y,n,m-1,cnt,temp);
      }
    
public:
    vector<vector<int>> generateMatrix(int n) {
       
        vector<vector<int>> mat(n,vector<int> (n,0));
        int temp=n*n+1;
        int cnt=1;
        Go_right(mat,0,0,1,0,n,n,cnt,temp);
        return mat;
    }
};