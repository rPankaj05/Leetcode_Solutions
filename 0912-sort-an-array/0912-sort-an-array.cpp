class Solution {
    
private: 
    
    void merge(vector<int>& nums,int start,int mid, int end){
        int tmp[end-start+1];
       int i=start, j=mid+1 , k=0;
       while(i<=mid and j<=end){
          if(nums[i]<=nums[j]) tmp[k++]=nums[i++];
          else tmp[k++]=nums[j++];
       }
       
       while(i<=mid) tmp[k++]=nums[i++];
       while(j<=end) tmp[k++]=nums[j++];
       
       for(int i=0;i+start<=end;i++){
           nums[start+i]=tmp[i];
       }
    }
    
    
    
    void mergeSort(vector<int>& nums,int start, int end){
        if(start>=end) return ;
        int mid=(start+end)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, start, mid, end);  
    }
    
    
    
    
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};