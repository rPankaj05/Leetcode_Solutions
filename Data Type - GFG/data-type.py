#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def dataTypeSize(self, str):
        if(str[0]=='C'): 
            return 1
        if(str[0]=='I'): 
            return 4
        if(str[0]=='L'): 
            return 8
        if(str[0]=='F'):
            return 4
        if(str[0]=='D'):
            return 8
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str = input()
        ob = Solution()
        res = ob.dataTypeSize(str)
        print(res)
# } Driver Code Ends