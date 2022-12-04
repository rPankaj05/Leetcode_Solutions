class Solution {
public:
    int findMin(vector<int>& nums) {
      
       int start=0, end=nums.size()-1;
        while(start<end){
           int mid=(start+end)/2;
           if(nums[0]<=nums[mid]) start=mid+1;
            else end=mid;
        }
        return min(nums[start],nums[0]);
    }
};