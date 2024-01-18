class Solution {
public:
    int climbStairs(int n) {
        if(n==1 or n==2) return n;
        int a=1, b=2;
        int ans=0;
        for(int i=3;i<=n;i++){
            ans=a+b;
            a=b;
            b=ans;
      }
        return ans;
    }
};