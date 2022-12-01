class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size(); int cnt1=0, cnt2=0;
        for(int i=0;i<n;i++){
            char it=s[i];
            if(it=='a' ||it=='e' ||it=='i' ||it=='o' ||it=='u' ||it=='A'                            ||it=='E' ||it=='I' ||it=='O' ||it=='U') {
                if(i<n/2) cnt1++;
                else cnt2++;    
            }
        }
      return cnt1==cnt2;
    }
};