class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int mx=0;
        for(auto it:nums){
            mx=max(it,mx);
        }
        int ans=1;
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(nums[i]==mx and nums[i]==nums[i-1]) cnt++;
            else{
            ans=max(ans,cnt);
            cnt=1;
            }
        }
        return  max(ans,cnt);
    }
};