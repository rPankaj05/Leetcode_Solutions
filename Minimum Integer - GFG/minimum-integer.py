from typing import List


class Solution:
    def minimumInteger(self, N : int, A : List[int]) -> int:
        sm=0
        for i in range(N):
            sm+=A[i]
        ans=1000000000
        for i in range(N):
            if(sm<=N*A[i]):
                ans=min(ans,A[i])
        
        return ans;
        
            
    


#{ 
 # Driver Code Starts
class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        N = int(input())
        
        
        A=IntArray().Input(N)
        
        obj = Solution()
        res = obj.minimumInteger(N, A)
        
        print(res)
        

# } Driver Code Ends