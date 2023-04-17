class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
         int mx=0;
        int n=c.size();
        for(int i=0;i<n;i++) {
           mx=max(mx,c[i]);
            c[i]+=e;
        }
     vector<bool> ans(n);
        for(int i=0;i<n;i++){
            if(c[i]>=mx) ans[i]=true;
            else ans[i]=false;
        }
        return ans;
    }
};