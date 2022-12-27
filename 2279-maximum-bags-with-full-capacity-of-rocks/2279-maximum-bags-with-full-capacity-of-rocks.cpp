class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int n=rocks.size();
      
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            v[i]=capacity[i]-rocks[i];
        }
        
        sort(v.begin(),v.end());
        
        int ans=0;
        for(int i=0;i<n;i++){
            if(additionalRocks<v[i]) break;
            else {
                ans++;
                additionalRocks-=v[i];
            }
        }
        
        return ans;
    }
};