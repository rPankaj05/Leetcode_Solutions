class Solution {
public:
int rob(vector<int>& nums)
{
    if(nums.size()==1) return nums[0];
    
    int pre2 = nums[0];
    int pre1 = max(nums[0], nums[1]);
    int cur;
    
    for(int i=2; i<nums.size(); i++)
    {
        cur = max(pre1, pre2+nums[i]);
        pre2 = pre1;
        pre1 = cur;
    }
    return pre1;
}
};