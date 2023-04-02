class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        
        int n=spells.size();
        int m=potions.size();
        
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++){
        long long tmp=spells[i];
            int s=0, e=m-1;
            int idx=m;
            while(s<=e){
                int mid=(s+e)/2;
                if(potions[mid]*tmp>=success) {
                    idx=mid;
                    e=mid-1;
                }
                else s=mid+1;
            }
            ans[i]=m-idx;
        }
        return ans;
    }
};