//{ Driver Code Starts
// Initial Template for C++

// Initial Template for C++
// Back-end complete function Template for C++
// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long lcmTriplets(long long n) {
        if(n<=2) return n;
        long long ans;
        if(n%3==0 and n%2==0){
            ans=(n-1)*(n-2)*(n-3);
        }
        else if(n%2==0) {
            ans=n*(n-1)*(n-3);
        }
        else {
            ans=n*(n-1)*(n-2);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.lcmTriplets(N) << "\n";
    }
}
// } Driver Code Ends