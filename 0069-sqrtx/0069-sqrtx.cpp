class Solution {
public:
   long long int mySqrt(int x) {
        long long l=1;
        long long h=x;
        long long  ans;
        while(l<=h){
            long long int m=(l+h)/2;
            long long int temp=m*m;
            if(temp==x) return m;
            else if(temp<x) { l=m+1;  ans=m; }
            else h=m-1;
        }
        return ans;
    }
};