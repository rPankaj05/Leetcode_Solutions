class Solution {
public:
    int percentageLetter(string s, char letter) {
       
        int n=s.size();
        int cnt=0;
        for(auto it:s) {
            if(it==letter) cnt++;
        }
       
        int ans=(cnt*100)/n;
        return ans;
    }
};