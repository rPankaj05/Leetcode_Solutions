//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
           vector<int> v;
        
          for(int i=0;i<n;i++) v.push_back(arr1[i]);
           for(int i=0;i<n;i++) v.push_back(arr2[i]);
          
           sort(v.begin(),v.end());
           map <int,int> mp;
           for(int i=v.size()-1;i>=0;i--) {
               mp[v[i]]=1;
               if(mp.size()==n) break;
           }
         vector<int> ans;
         for(int i=0;i<n;i++){
             if(mp[arr2[i]]==1){ ans.push_back(arr2[i])  ; mp[arr2[i]]=0 ;}
             if(ans.size()==n) return ans;
         }
          for(int i=0;i<n;i++){
             if(mp[arr1[i]]==1){ ans.push_back(arr1[i])  ; mp[arr1[i]]=0 ;}
             if(ans.size()==n) return ans;
         }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends