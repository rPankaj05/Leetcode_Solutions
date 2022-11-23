class Solution {
    
    bool isSafe(vector<vector<char>>& board,int row,int col,char temp){
        for(int cnt=0;cnt<9;cnt++){
          if(board[row][cnt]==temp) return false ; // check for row 
          if(board[cnt][col]==temp) return false;  // chack for col
            
           if( board[(row/3 *3) + (cnt/3)][(col/3 *3) + (cnt%3)]==temp) return false;
          
        }
        return true;
    }
    
    
    
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]!='.'){
                   char temp=board[row][col]; 
                    board[row][col]='*';
                   if(!isSafe(board,row,col,temp)) return false;
                    board[row][col]=temp;
                   }
            }
        }
        return true;
    }
};