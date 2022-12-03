class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto it:s) mp[it]++;
        priority_queue<pair<int,char>> q;
        for(auto it:mp){
            q.push({it.second,it.first});
        }
      string ans="";  
        while(!q.empty()){
            auto it=q.top();
            q.pop();
            int n=it.first;
            char c=it.second;
            while(n--) ans.push_back(c);
        }
        return ans;
    }
};