class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> v(k,0);
        for(auto &i: arr){
            v[(k+(i%k))%k]++;
        }
        for(int i = 0; i <= k/2; i++){
            if(i==0){
                if(v[i]&1)return false;
            }
            else if((v[i]!=(v[k-i]))){
                return false;
            }
        }
        return true;
    }
};