class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i+=2){
           if(s[i]!=s[i+1]) ans++;
        }
        return ans;
    }
};