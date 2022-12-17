//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long maxGcd(int N) {
        long long int n=N;
        int cnt=1;
        long long int ans=n;
        while(n-->1){
            if(__gcd(ans,n)==1){
                ans*=n;
                cnt++;
            }
          if(cnt==4) break;
        }
       
        return  ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.maxGcd(N) << "\n";
    }
}
// } Driver Code Ends