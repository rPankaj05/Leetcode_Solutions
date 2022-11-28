//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	   vector<int> ans;
	   int sum=0;
	   int mxsum=0;
	   int start=0;
	   int startmx=0, endmx=0;
	   for(int i=0;i<n;i++){
	      
	       if(a[i]<0){
	           start=i+1;
	           sum=0;
	          }
	       else  sum+=a[i]; 
	          
	        if(mxsum<sum){
	               startmx=start;
	               endmx=i+1;
	               mxsum=sum;
	           }
	       
	       else if(mxsum==sum){
	               if((i+1-start)>(endmx-startmx)){
	                   startmx=start;
	                   endmx=i+1;
	               }
	          }
    	   }
	   
	   for(int i=startmx;i<endmx;i++) ans.push_back(a[i]);
	   if(ans.size()==0) return {-1};
	   return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends