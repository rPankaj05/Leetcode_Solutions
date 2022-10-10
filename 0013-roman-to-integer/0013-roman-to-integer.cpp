class Solution {
public:
    
    int value(char c)
         {
           if (c== 'I') return 1;
           if (c== 'V') return 5;
           if (c== 'X') return 10;
           if (c== 'L') return 50;
           if (c== 'C') return 100;
           if (c== 'D') return 500;
           if (c== 'M') return 1000;
           return -1;
         }
    
    
    
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int n1=value(s[i]);
            if(i+1<n) {
                int n2=value(s[i+1]);
                if(n1>=n2) ans+=n1;
                else {
                    ans+=(n2-n1);
                    i++;
                }
            }
        else ans+=n1;
        }
        return ans;
    }
};