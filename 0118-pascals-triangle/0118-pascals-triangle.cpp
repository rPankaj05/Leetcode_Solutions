class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        
        for(int i=1;i<n;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int i=1;i<v.size();i++){
                temp.push_back(v[i-1]+v[i]);
            }
            temp.push_back(1);
            v=temp;
             ans.push_back(v);
        }
        return ans;
    }
};