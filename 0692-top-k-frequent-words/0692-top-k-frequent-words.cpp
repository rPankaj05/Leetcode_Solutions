class Solution {
public:
    
    static bool comparator(pair<string,int> a,pair<string,int> b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        for(auto it:words) mp[it]++;
       
        vector<pair<string,int>> vec;
        for(auto it:mp){
          vec.push_back({it.first,it.second});  
        }
       
        sort(vec.begin(),vec.end(),comparator);
        
        vector<string> ans;
        int i=0;
        while(k--){
            ans.push_back(vec[i++].first);
        }
       return ans;
    }
};