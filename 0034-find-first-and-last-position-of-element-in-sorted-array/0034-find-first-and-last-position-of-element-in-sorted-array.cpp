class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        vector<int> ans;
        int tmp=-1;
        while(s<=e){  
          int mid=(s+e)/2;
            if(nums[mid]==target){
                tmp=mid;
                e=mid-1;
            }
            else if(target<nums[mid]) e=mid-1;
        else s=mid+1;
        }
        
        if(tmp==-1) return {-1,-1};
        ans.push_back(tmp);
        tmp=-1;
        
        s=0; e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target) {
                tmp=mid;
                s=mid+1;
            }
        else if(target>nums[mid]) s=mid+1;
            else e=mid-1;
        }
        ans.push_back(tmp);
        return ans;
    }
};