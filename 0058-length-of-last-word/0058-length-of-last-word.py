class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.strip()
        last_space_index = s.rfind(' ')
        if last_space_index == -1:
            return len(s)

        return len(s) - last_space_index - 1
        
        