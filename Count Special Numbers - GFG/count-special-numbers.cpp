//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        unordered_map<int,int> mp;
        for(auto it:arr) mp[it]++;
        int ans=0;
        for(auto it:mp){
            if(it.second>1) ans+=it.second;
            else{
                for(int i=0;i<n;i++){
                  
                    if(it.first!=arr[i] and it.first%arr[i]==0) {
                        ans++;
                        break;
                        
                    }
                  
             }
         }   
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends