class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;
        for(auto it:piles) q.push(it);
        while(k--){
            int m=q.top(); 
            int tmp=(m+1)/2; 
            q.pop();
            q.push(tmp);
        }
        
        int ans=0;
        while(!q.empty()){
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};