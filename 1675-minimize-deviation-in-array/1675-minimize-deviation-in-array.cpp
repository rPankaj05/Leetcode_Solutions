class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        priority_queue<int> q;
        int mn=INT_MAX;
       
        for(auto it:nums){
            if(it%2) it=2*it;
            q.push(it);
            mn=min(mn,it);
         }
        
        int ans=INT_MAX;
        
        while(!q.empty()){
            int top=q.top();
            q.pop();
            ans=min(ans,top-mn);
            if(top%2) break;
            mn=min(mn,top/2);
            q.push(top/2);
        }
        
        return ans;
    }
};