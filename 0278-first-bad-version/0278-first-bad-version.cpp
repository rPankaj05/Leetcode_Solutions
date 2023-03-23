// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1, e=n;
        int ans=0;
        while(s<=e){
            int m=s+(e-s)/2;
            cout<<m<<" ";
            if(isBadVersion(m)){
                ans=m;
                e=m-1;
            }
            else s=m+1;
        }
        return ans;
    }
};