class Solution:
    def minChanges(self, s: str) -> int:
        n = len(s)
        i = 0
        ans = 0
        while(i<n):
            if(s[i]!=s[i+1]):
                ans+=1
            i+=2
        return ans