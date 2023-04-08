class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
       int i=n-2;
       while(i>=0){
           if(nums[i]<nums[i+1]) break;
           i--;
         }
      if(i<0) {
          reverse(nums.begin(),nums.end());
        }
      else{
          int j=n-1;
          while(j>i){
              if(nums[j]>nums[i]) break;
              else j--;
          }
          
          swap(nums[i],nums[j]);
          
          reverse(nums.begin()+i+1,nums.end());
      }
      
    }
};