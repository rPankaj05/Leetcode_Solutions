class Solution {
    
    int solve(string &word1,string &word2, int i, 
              int j,vector<vector<int>> &dp){
       
        if(i==word1.size()) return word2.size()-j;
        if(j==word2.size()) return word1.size()-i;
        
        int ans=0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
       if(word1[i]==word2[j]) return solve(word1,word2,i+1,j+1,dp);
        
        else {
            
            int insertAns=1+solve(word1,word2,i,j+1,dp);
            int deleteAns=1+solve(word1,word2,i+1,j,dp);
            int replaceAns=1+solve(word1,word2,i+1,j+1,dp);
            ans=min(insertAns,min(deleteAns,replaceAns));
       
        }
        
       return dp[i][j]=ans; 
    }
    
    
public:
    int minDistance(string word1, string word2) {
    vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1)) ;
        return solve(word1,word2,0,0,dp);
    }
};
