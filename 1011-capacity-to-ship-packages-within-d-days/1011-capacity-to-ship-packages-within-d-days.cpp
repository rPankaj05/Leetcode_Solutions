class Solution {
public:
    
    bool isValid(vector<int>& weights,int m, int days){
        int n=weights.size();
        int sum=0, cnt=1;
        for(int i=0;i<n;i++){
            if(sum+weights[i]<=m){
                sum+=weights[i];
            }
            else {
                cnt++;
                if(cnt>days || weights[i]>m) return false;
                sum=weights[i];
            }  
        }
        return true;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=0;
        int sum=0;
        for(auto it:weights) sum+=it;
        
        int s=1 , e=sum;
        
        while(s<=e){
            int m=(s+e)/2;
            if(isValid(weights,m,days)){
                e=m-1;
                ans=m;
            }
            else s=m+1;
        }
        return ans;
    }
};