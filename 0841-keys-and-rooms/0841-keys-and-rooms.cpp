class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,bool> mp;
        mp[0]=true;
        for(int i=1;i<rooms.size();i++) mp[i]=false;
       
        stack<int> st;
       
        for(int i=0;i<rooms[0].size();i++){
            int tmp=rooms[0][i];
            if(mp[tmp]==false) {
                st.push(tmp);
                mp[tmp]=true;
            }
         }
        
        while(!st.empty()){
            int t=st.top();
            st.pop();
            for(int i=0;i<rooms[t].size();i++){
                int tmp=rooms[t][i];
                if(mp[tmp]==false){
                    st.push(tmp);
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