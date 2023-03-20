class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int k) {
        
        v.push_back(0);
        v.push_back(1);
        int n=v.size();
        
        if(k==0) return true;
       
        if(n==1){
            if(v[0]==0 and k==1) return true;
            else return false;
        }
        
        int zero=0;
        if(v[0]==0 and v[1]==0) k--;
        for(int i=1;i<n;i++){
            if(v[i]==0) zero++;
            else {
              if(zero>0)  k-=(zero-1)/2;
                zero=0;
            }
            if(k<=0) return true;
         }

        return false;
    }
};