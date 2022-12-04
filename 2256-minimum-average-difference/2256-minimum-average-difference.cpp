class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long totsum=0;
        for(int i=0;i<n;i++) totsum+=nums[i];
        int ans=0;
        long long frontSum=0;
        long long rearSum=totsum;
        long long minAvgDiff=INT_MAX;
        long long currAvgDiff=INT_MAX;
      
        for(int i=0;i<n-1;i++){
            frontSum+=nums[i];
            rearSum-=nums[i];
            long long frontAvg=frontSum/(i+1);
            long long rearAvg=rearSum/(n-i-1);
            currAvgDiff=abs(frontAvg-rearAvg);
            if(currAvgDiff<minAvgDiff){
                ans=i;
                minAvgDiff=currAvgDiff;
            }
        }
        if(totsum/n <minAvgDiff) ans=n-1;
        return ans;
    }
};