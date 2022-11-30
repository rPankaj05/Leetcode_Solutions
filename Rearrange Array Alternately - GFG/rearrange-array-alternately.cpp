//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *a, int n) 
    { 
    	 long long i=0, j=n-1;
        long long  mnidx=0, mxidx=n-1;
        long long  me=a[j]+1;
        
        while(i<n){
            long long temp=0;
            if(i%2==0)
            {
                 temp=(a[i]+a[mxidx]%me *me);
                 mxidx--;
            }
        else  {
                 temp=(a[i]+a[mnidx]%me *me);
                 mnidx++;
        }
        a[i]=temp;
        i++;
        }
    for(int i=0;i<n;i++){
        a[i]=a[i]/me;
    }
    	 
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends