class Solution(object):
    def countConsistentStrings(self, allowed, words):
        """
        :type allowed: str
        :type words: List[str]
        :rtype: int
        """
        ans = 0
        for word in words:
            allowed_str = True
            for ch in word:
                if ch not in allowed:
                    allowed_str = False
                    continue
            if allowed_str:
                ans+=1
            
        return ans;
        