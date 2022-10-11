class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str=""; int ans=0; int m=0; 
        for(int i=0;i<s.size();i++)
        { str.push_back(s[i]); int c=1;
          for(int j=m;j<str.size()-1;j++)
          { if(str[j]==s[i]) {m=j+1; break;}
            else c++; 
          }
            ans=max(ans,c);
        }
    return ans;
    }
};