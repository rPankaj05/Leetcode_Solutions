#User function Template for python3


class Solution:
    def xmod11(self,x):
        res=0;
        for i in x:
            res=(res*10 + ord(i))%11;
        return res;


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
    tcs=int(input())
    for _ in range(tcs):
        x = input()
        
        ob = Solution()
        
        print(ob.xmod11(x))

# } Driver Code Ends