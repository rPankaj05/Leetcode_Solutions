class Solution {
public:
    
    int getPivot(vector<int>& arr, int n){
    int start=0, end=n-1;
    int mid=0;
    while(start<end){
        mid=(start+end)/2;
        if(arr[mid]>=arr[0]) start=mid+1;
        else end=mid;
    }
    return start;
}
    
    
    int search(vector<int>& nums, int target) {
   int n=nums.size();
   int pivot=getPivot(nums,n);
   int start=0, end=n-1,mid=-1;
   if(nums[pivot]<=target and target<=nums[end]){
       start=pivot;
   }
   else end=pivot-1;
   while(start<=end){
     mid=(start+end)/2;
       if(nums[mid]==target) return mid;
       else if(nums[mid]<target) start=mid+1;
       else end=mid-1;
   }
   return -1;
    }
};