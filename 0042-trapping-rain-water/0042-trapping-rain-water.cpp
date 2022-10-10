class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax[n];
        int rightmax[n];
        int mx1=-1;
        for(int i=0;i<n;i++){
            mx1=max(mx1,height[i]) ;
            leftmax[i]=mx1;
            }
        int mx2=-1;
        for(int i=n-1;i>=0;i--){
            mx2=max(mx2,height[i]);
            rightmax[i]=mx2;
        }
        long long temp=0, ans=0;
       for(int i=0;i<n;i++){
           temp=min(leftmax[i],rightmax[i]);
           if(temp>=height[i]) ans+=temp-height[i] ;
       }
       return ans;
    }
};