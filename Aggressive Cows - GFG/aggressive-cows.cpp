//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
    private: 
    
    bool isPossible(vector<int> a, int n, int k,int mid){
        int cow=1;
        int lastpos=a[0];
        for(int i=0;i<n;i++){
            if((a[i]-lastpos)>=mid) {
                cow++;
                if(cow==k) return true;
                lastpos=a[i];
            }
        }
        return false;
    }
    
    
    
public:

    int solve(int n, int k, vector<int> &a) {
      
      sort(a.begin(),a.end());
      
      int start=1;
      int end=a[n-1];
      int ans=0;
      int mid=0;
      while(start<=end){
           mid=(start+end)/2;
          if(isPossible(a,n,k,mid)){
              ans=mid;
              start=mid+1;
          }
          else end=mid-1;
      }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends