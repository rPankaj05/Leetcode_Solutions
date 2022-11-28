class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      
        vector<vector<int>> ans(2, vector<int>(0));
      
        map<int,int> win;
        map<int,int> los;
      
        for(auto it: matches) { win[it[0]]++ ; los[it[1]]++;}
        
        for(auto it: win) if(los[it.first]==0)                                                           ans[0].push_back(it.first);
       
        for(auto it:los) if(it.second==1) 
                               ans[1].push_back(it.first);
     
        
        return ans;
        
    }
};