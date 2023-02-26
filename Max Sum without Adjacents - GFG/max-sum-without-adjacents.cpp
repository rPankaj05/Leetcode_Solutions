//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

/* Recursion + Memoization
class Solution{
    
    private:
      
      int solve(int *arr, int n,vector<int> &dp){
          
          if(n<0) return 0 ;
          if(n==0) return arr[0];
         
          if(dp[n]!=-1) return dp[n];
           
          int includeAns=solve(arr,n-2,dp)+arr[n];
          int excludeAns=solve(arr,n-1,dp);
          
          dp[n]=max(includeAns,excludeAns);
          
          return dp[n];
      }
    
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    vector<int> dp(n,-1);
	    return solve(arr,n-1,dp);
	
	}
};


*/
 // Tabulation  

class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   
	    vector<int> dp(n,0);
	    dp[0]=arr[0];
	    
	    for(int i=1;i<n;i++){
	        int incAns=dp[i-2]+arr[i];
	        int exclAns=dp[i-1];
	        dp[i]=max(incAns,exclAns);
	    }
	    
	    return dp[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends