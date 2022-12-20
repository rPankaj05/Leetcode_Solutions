class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,bool> mp;
        mp[0]=true;
        for(int i=1;i<rooms.size();i++) mp[i]=false;
       
        queue<int> q;
       
        for(int i=0;i<rooms[0].size();i++){
            int tmp=rooms[0][i];
            if(mp[tmp]==false) {
                q.push(tmp);
                mp[tmp]=true;
            }
         }
        
        while(!q.empty()){
            int t=q.front();
            q.pop();
            for(int i=0;i<rooms[t].size();i++){
                int tmp=rooms[t][i];
                if(mp[tmp]==false){
                    q.push(tmp);
                    mp[tmp]=true;
                }
            }
        }
        
        for(auto it:mp) {
           if(it.second==false) return false;
        }
        return true;
    }
};