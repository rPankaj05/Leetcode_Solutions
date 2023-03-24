#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3
class Solution:
    def removeReverse(self, S): 
        dic={}
        n=len(S)
        s=list(S)
        for i in S:
            if i in dic:
                dic[i]+=1
            else:
                dic[i]=1
                
        i=0
        j=n-1
        dir=1
        while(i<=j):
            if dir==1:
                if dic[S[i]]==1:
                    i+=1
                else:
                    dic[S[i]]-=1
                    s[i]='@'
                    i+=1
                    dir=-1
            else:
                if dic[S[j]]==1:
                    j-=1
                else:
                    dic[S[j]]-=1
                    s[j]='@'
                    j-=1
                    dir=1
                
        
        ans=""
        for i in s:
            if i!='@':
                ans=ans+i
        
       
        if dir==-1:
            return ans[::-1]
        
        return ans
        
        
        
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        S = input()
        ob = Solution()
        ans = ob.removeReverse(S)
        print(ans)


# } Driver Code Ends