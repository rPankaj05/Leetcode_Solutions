class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start=0;
        int end=nums.size()-1;
        int ans=0;
        
        while(start<=end){
           int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]<target){
                start=mid+1;
                ans=mid+1;
            }
            else end=mid-1;
        }
        return ans;
        
    }
};