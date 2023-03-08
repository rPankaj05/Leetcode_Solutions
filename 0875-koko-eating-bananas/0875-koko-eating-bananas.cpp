class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=INT_MIN;
        for(auto it:piles) end=max(end,it)+1;
        int ans=0;
        while(start<end){
            int mid=(start+end)/2;
            int cnt=0;
            for(int i=0;i<piles.size();i++){
                cnt+=(piles[i]+mid-1)/mid;
            }
          if(cnt<=h) {ans=mid; end=mid;}
          else start=mid+1;
        }
        return ans;
    }
};