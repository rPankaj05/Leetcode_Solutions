class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int i=0, j=p.size()-1;
        sort(p.begin(),p.end());
        int ans=0;
        while(i<=j){
          int tmp=p[i]+p[j];
           if(tmp<=limit){
              ans++;
               i++;
               j--;
           }
          else {
              ans++;
              j--;
          }
        }
      return ans;
    }
};