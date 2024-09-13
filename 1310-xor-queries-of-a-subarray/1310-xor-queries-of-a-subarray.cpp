class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n,0);
        int k=0;
        for(auto it:queries){
            int temp = arr[it[0]];
            for(int i=it[0]+1;i<=it[1];i++){
                temp^=arr[i];
             }
            ans[k++]=temp;
        }
        return ans;
    }
};