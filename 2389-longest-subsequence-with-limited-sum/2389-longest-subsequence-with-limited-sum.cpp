class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       
        sort(nums.begin(),nums.end());
        
        vector<int> ans;
        
        for(int i=0;i<queries.size();i++){
            int sum=queries[i];
            int cnt=0;
            for(int j=0;j<nums.size();j++){
               sum-=nums[j];
                if(sum<0) break;
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};