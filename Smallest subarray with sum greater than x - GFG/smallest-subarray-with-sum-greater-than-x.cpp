//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {   long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]>x) return 1;
        }
        if(sum<=x) return 0;
        
         sum=0;  int ans=n+1;
       int start = 0, end = 0;
     
        while (end < n) {
        while (sum<=x && end<n) sum+=arr[end++];
        while (sum>x && start<n) {
             if (end-start<ans) ans=end-start;
              sum -= arr[start++];
           }
         }
         
         
    return ans;   
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends