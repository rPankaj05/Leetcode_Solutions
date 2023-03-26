#User function Template for python3

class Solution:
    def unvisitedLeaves(self, n, leaves, frogs):
        # code here
        dic={}
        for i in range(leaves):
            dic[i+1]=0
        
        for i in frogs:
            x=i
            if(x<=leaves):
                if dic[i]==0:
                    while i<=leaves:
                        dic[i]=1
                        i=i+x
                
        ans=0;
        for i in range(leaves):
            if dic[i+1]==0:
                ans+=1
        
        return ans;
            
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    
    T = int(input())
    while T > 0: 
        N, leaves = [int(i) for i in input().split()]
        frogs = [int(i) for i in input().split()]
        ob = Solution()
        print(ob.unvisitedLeaves(N, leaves, frogs))
        
        T -= 1
# } Driver Code Ends