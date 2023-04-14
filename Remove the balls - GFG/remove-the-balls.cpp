//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        stack<int> st1;
        stack<int> st2;
        for(int i=0;i<n;i++){
            if(!st1.empty() and !st2.empty() and
                st1.top()==color[i] and st2.top()==radius[i]){
                    st1.pop();
                    st2.pop();
                }
            
            else {
                st1.push(color[i]);
                st2.push(radius[i]);
            }
        }
        return st1.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends