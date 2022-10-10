//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int start=0, end=n-1;
        int mid=(start+end)/2;
        while(start<end){
            
            if(mid%2){
                if(arr[mid]!=arr[mid-1]) end=mid;
                else start=mid+1;
             }
            else {
                if(arr[mid]!=arr[mid+1]) end=mid;
                else start=mid+1;
            }
          mid=(start+end)/2;
        }
        return arr[mid];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends