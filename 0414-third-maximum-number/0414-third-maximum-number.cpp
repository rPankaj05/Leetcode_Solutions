class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long max1,max2,max3;
        max1=max2=max3=LLONG_MIN;
        
        for(int i=0;i<n;i++){
            if(nums[i]>max1) max1=nums[i];
         }
        
        for(int i=0;i<n;i++){
            if(nums[i]<max1 and nums[i]>max2) max2=nums[i];
          }
        
        for(int i=0;i<n;i++){
            if(nums[i]<max2 and nums[i]>max3) max3=nums[i];
        }

        if(max3!=LLONG_MIN) return max3;
        return max1;
    }
};