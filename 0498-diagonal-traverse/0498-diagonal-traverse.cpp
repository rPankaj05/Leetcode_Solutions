class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
      
       int m=mat.size();
       int n=mat[0].size();
       if(m==0 || n==0) return {};
       vector<int> ans(m*n,0);
        int row=0, col=0;
       for(int i=0;i<ans.size();i++){
           ans[i]=mat[row][col];
           if((row+col)%2==0){
               if(col==n-1) row++;
               else if(row==0) col++;
               else { row--;col++;}
             }
          else {
              if(row==m-1) col++;
              else if(col==0) row++;
              else {row++; col--;}
          }
       }
        return ans; 
    }
};