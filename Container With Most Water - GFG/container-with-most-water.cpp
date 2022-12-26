//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
   long long  ans=0;
   long long  l=0, r=len-1;
   while(l<r){
       long long  height=min(A[l],A[r]);
        long long area=(r-l)*height;
        ans=max(ans,area);
        if(A[l]<A[r]) l++;
        else r--;
   }
   return ans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends