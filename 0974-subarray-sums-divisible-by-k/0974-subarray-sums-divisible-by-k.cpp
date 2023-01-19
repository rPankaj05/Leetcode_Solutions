class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int currsum=0;
        int ans=0;
        map<int,int> mp;
        mp.insert({0,1});
        for(auto it:nums){
            currsum+=it;
            int tmp=currsum%k;
            if(tmp<0) tmp+=k;
            if(mp[tmp]>0) ans+=mp[tmp];
             mp[tmp]++;
        }
        return ans;
    }
};