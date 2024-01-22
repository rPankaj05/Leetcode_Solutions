class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            v[nums[i]-1]++;
         }
        for(int i=0;i<n;i++){
            if(v[i]==0) ans.push_back(i+1);
            if(v[i]==2) ans.insert(ans.begin(),i+1);
        }

        return ans;
    }
    
};