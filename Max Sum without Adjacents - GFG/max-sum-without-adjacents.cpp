//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

//  recursive solution 
/*
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr, int n) {
	    if(n<0) return 0;
	    if(n==0) return arr[0];
	    int take=arr[n]+solve(arr,n-2);
	    int notTake=solve(arr,n-1);
	    return max(take,notTake);
	}
	
	int findMaxSum(int *arr, int n) {
	    int ans=0;
	   ans=  mx(arr,n-1);
	   return ans;

	}
};
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr, int n) {
	    vector<int> dp(n,0);
	    dp[0]=arr[0];
	    for(int i=1;i<n;i++){
	        dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
	    }
	    return dp[n-1];
	}
	
	int findMaxSum(int *arr, int n) {
	   return solve(arr,n);

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