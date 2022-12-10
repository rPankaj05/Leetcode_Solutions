//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if(n%2) return false;
       
        unordered_map<int,int> mp;
        
        for(auto it:nums) mp[it%k]++;
        
        if(mp[0]%2) return false;
        
        for(int i=1;i<k;i++){
            if(mp[i]!=mp[k-i]) return false;
        }
        
        
        return true;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends