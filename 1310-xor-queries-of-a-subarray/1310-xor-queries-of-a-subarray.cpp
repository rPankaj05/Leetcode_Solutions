class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto it:queries){
            int left = it[0];
            int right = it[1];
            int temp = arr[left];
            for(int i=left+1;i<=right;i++){
                temp^=arr[i];
             }
            ans.push_back(temp);
        }
        return ans;
    }
};