class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(int i=0;i<arr1.size();i++){
           mp[arr1[i]]++;
        }
        vector<int> ans;
        for(auto it:arr2){
         for(int i=0;i<mp[it];i++){
             ans.push_back(it);
         }
            mp.erase(it);
        }
        
        for(auto it:mp){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
              }
            
        }
        return ans;
    }
};