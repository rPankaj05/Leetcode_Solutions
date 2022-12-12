class Solution {
public:
    int climbStairs(int n) {
        
        
        int a=0, b=1,ans=0;
      for(int i=1;i<=n;i++){
          ans=a+b;
          a=b;
          b=ans;
      }
        
        return ans;
    }
};