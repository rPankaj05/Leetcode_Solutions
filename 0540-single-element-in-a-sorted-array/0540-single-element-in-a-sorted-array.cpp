class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        int mid=(start+end)/2;
        while(start<end){
            if(mid%2==0){
               if(nums[mid]==nums[mid+1]) start=mid+1;
                else end=mid;
            }
            else {
               if(nums[mid]==nums[mid-1]) start=mid+1;
                else end=mid;
            }
            mid=(start+end)/2;
        }
        
        return nums[mid];
    }
};