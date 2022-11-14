class Solution {
public:
    bool valid(vector<int>& p1 , vector<int>& p2){
        if(p1[0] == p2[0]) return true;
        if(p1[1] == p2[1]) return true;
        return false;
    }
    void dfs(vector<vector<int>>& stones , vector<bool>& visited , int i){
        visited[i] = true;
        for(int j = 0 ; j < stones.size() ; j++){
            if(valid(stones[i] , stones[j]) && !visited[j]) {
                dfs(stones , visited , j);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> visited(n , false);
        int count = 0;
        for(int i = 0; i < n ;i++){
            if(!visited[i]){
                dfs(stones , visited , i);
                count++;
            }
        }

        return n - count;
    }
};