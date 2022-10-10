class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int low=j+1, high=n-1;
                while(low<high){
            long long sum=(long long) nums[i]+nums[j]+nums[low]+nums[high];
                    if(sum<target) low++;
                    else if(sum>target) high--;
                    else{
                        vector<int> v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[low];
                        v[3]=nums[high];
                        st.insert(v);
                        low++;
                        high--;
                    }
                }
              while(j+1<n and nums[j]==nums[j+1]) j++;
            }
            while(i+1<n and nums[i]==nums[i+1]) i++;
        }
        for(auto it: st) ans.push_back(it);
        return ans;
    }
};