class Solution {
public:
    int maxPower(string s) {
        int ans=1, maxans=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) ans++;
            else {
                maxans=max(ans,maxans);
                ans=1;
            }
        }
         maxans=max(ans,maxans);
        return maxans;
    }
};