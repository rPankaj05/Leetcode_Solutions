class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int deficiency=0;
        int ans=0;
        int balance=0;
        for(int i=0;i<gas.size();i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                deficiency+=balance;
                ans=i+1;
                balance=0;
            }
        }
        
        if(deficiency+balance>=0) return ans;
        return -1;
    }
};