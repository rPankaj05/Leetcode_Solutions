class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int currmin=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<=currmin) currmin=prices[i];
            else ans=max(ans,prices[i]-currmin);
        }
        
        return ans;
    }
};