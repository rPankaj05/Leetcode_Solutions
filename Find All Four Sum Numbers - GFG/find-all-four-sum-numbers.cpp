//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
       vector<vector<int>> ans;
       set<vector<int>> st;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int low=j+1, high=n-1;
                while(low<high){
                    int sum=arr[i]+arr[j]+arr[low]+arr[high];
                    if(sum==k){
                      vector<int> tmp;
                      tmp.push_back(arr[i]);
                      tmp.push_back(arr[j]);
                      tmp.push_back(arr[low]);
                      tmp.push_back(arr[high]);
                       st.insert(tmp);
                       low++;
                       high--;
                    }
                  else if(sum>k) high--;
                  else low++;
                }
              }
        }
        for(auto it:st) ans.push_back(it);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends